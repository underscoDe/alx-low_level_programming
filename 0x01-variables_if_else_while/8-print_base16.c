#include <stdio.h>

/**
* main - Entry point
*
* Return: returns 0 when everything works fine
*
*/

int main(void)
{
	int n;

	for (n = 48; n <= 57; ++n)
		putchar(n);
	for (n = 97; n <= 102; ++n)
		putchar(n);
	putchar(10);
	return (0);
}
