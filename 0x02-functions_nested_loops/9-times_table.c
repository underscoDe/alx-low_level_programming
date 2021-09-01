#include "holberton.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Doesn't return anything, void
 */
void times_table(void)
{
	int i, j, product, x;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			product = j * i;
			if (i != 0)
			{
				_putchar(',');
				for (x = len(product); x <= len(9 * 9); x++)
					_putchar(' ');
			}
			if (product > 9)
			{
				_putchar(product / 10 + '0');
			}
			_putchar(product % 10 + '0');
		}
		_putchar('\n');
	}
}

/**
 * len - counts the number of digits in a number
 * @n: number to be used
 *
 * Return: returns the number of digits
 */
int len(int n)
{
	int out = 0;

	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		out++;
	}
	return (out);
}
