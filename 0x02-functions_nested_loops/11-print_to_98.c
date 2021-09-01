#include <stdio.h>

/**
 * print_to_98 - prints from a given number upto 98
 * @n: the number to start from
 *
 * Return: Nothing, Void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
		}
	}
	else
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
		}
	}
	printf("\n");
}
