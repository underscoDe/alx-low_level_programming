#include "holberton.h"

/**
 * jack_bauer - prints 00:00 upto 23:59
 *
 * Return: Doesn't return anything, void
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (j = 0; j <= 23; j++)
	{
		for (i = 0; i <= 59; i++)
		{
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar(':');
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar('\n');
		}
	}
}
