#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitalized
 *
 * Return: address to the string
 */

char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
		i++;
	}

	while (str[i] != '\0')
	{
		if (is_separator(str[i]) && (str[i + 1] >= 'a'
						 && str[i + 1] <= 'z'))
			str[i + 1] -= 32;
		i++;
	}

	return (str);
}

/**
 * is_separator - checks if a is a valid word separator
 * @a: char to be checked
 *
 * Return: 1 if char is a separator, 0 otherwise
 */

int is_separator(char a)
{
	int i = 0, flag = 0;

	for (i = 0; i < 13; i++)
	{
		if (a == ' ' ||
			a == '\t' ||
			a == '\n' ||
			a == ',' ||
			a == ';' ||
			a == '.' ||
			a == '!' ||
			a == '?' ||
			a == '"' ||
			a == '(' ||
			a == ')' ||
			a == '{' ||
			a == '}')
			flag = 1;
	}

	return (flag);
}
