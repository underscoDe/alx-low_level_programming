#include <stdio.h>
#include "main.h"

/**
* print_number - Prints a number
* @n: The number to print
*/

void print_number(int n)
{
	unsigned int num = n;
	if (n < 0)
	{
		putchar('-');
		num = -num;
	}
	if (num > 9)
	{
		print_number(num / 10);
	}
	putchar(num % 10 + '0');
}
