#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: array to be used
 * @size: size of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, sum_1 = 0, sum_2 = 0;

	for (; i < size * size; i += size)
	{
		sum_1 += a[i + j];
		sum_2 += a[i + (size - 1) - j];
		j++;
	}
	printf("%d, %d\n", sum_1, sum_2);
}
