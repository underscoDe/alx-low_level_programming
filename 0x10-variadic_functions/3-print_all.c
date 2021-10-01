#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int j = 0, last_arg;
	char type;
	va_list params;

	va_start(params, format);
	while ((format != NULL) && (format[j]))
	{
		last_arg = count_format(format);
		type = *(format + j);
		switch (type)
		{
			case 'c':
				printf("%c", va_arg(params, int));
				print_comma(j, last_arg);
				j++;
				break;
			case 'i':
				printf("%d", va_arg(params, int));
				print_comma(j, last_arg);
				j++;
				break;
			case 'f':
				printf("%f", va_arg(params, double));
				print_comma(j, last_arg);
				j++;
				break;
			case 's':
				printf("%s", make_nil(va_arg(params, char *)));
				print_comma(j, last_arg);
				j++;
				break;
			default:
				j++;
			break;
		}
	}
	printf("\n");
	va_end(params);
}

/**
 * count_format - counts valid type in format
 * @format: format to be used
 *
 * Return: count of the valid types
 */

int count_format(const char * const format)
{
	int i = 0, j = 0;
	char type;

	while ((*(format + j) != '\0') && (format != NULL))
	{
		type = *(format + j);
		switch (type)
		{
			case 'c':
				i = j;
				j++;
				break;
			case 'i':
				i = j;
				j++;
				break;
			case 'f':
				i = j;
				j++;
				break;
			case 's':
				i = j;
				j++;
				break;
			default:
				j++;
				break;
		}
	}

	return (i);
}

/**
 * print_comma - prints a comma and space when valid
 * @j: first number to be compared
 * @x: second number to be compared
 *
 * Return: void
 */

void print_comma(int j, int x)
{
	if (j != x)
	{
		printf(", ");
	}
}

/**
 * make_nil - changes s to be "(nil)" if s is null
 * @s: string to be used
 *
 * Return: pointer to s
 */
char *make_nil(char *s)
{
	if (s == NULL)
		s = "(nil)";

	return (s);
}
