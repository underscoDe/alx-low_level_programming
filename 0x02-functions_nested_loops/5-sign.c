#include "holberton.h"

/**
 * print_sign - checks whether a number is negative, 0, or positive
 * @n: the number to be checked
 *
 * Return: 1 if n is positive
 * 0 if n is zero
 * -1 if n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
