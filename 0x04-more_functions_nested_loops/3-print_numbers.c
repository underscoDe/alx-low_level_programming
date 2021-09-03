#include "main.h"
#include <stdio.h>

/**
*print_numbers - function that print all numbers from
*0 to 9
*
*Return: returns nothing
*/

void print_numbers(void)
{
	int n = 48;
	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
