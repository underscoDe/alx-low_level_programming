#include "main.h"

/**
 * print_chessboard - print's a chessboard
 * @a: array to be printed
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;

	for (; i < 8; i++)
	{
		int j = 0;

		for (; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
