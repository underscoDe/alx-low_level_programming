#include "holberton.h"

/**
 * print_alphabet_x10 - prints a-z to the standard output 10 times
 *
 * Return: Doesn't return anything, void
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
