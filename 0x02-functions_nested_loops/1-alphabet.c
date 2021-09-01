#include "holberton.h"

/**
 * print_alphabet - prints a-z to the standard output
 *
 * Return: Doesn't return anything, void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
