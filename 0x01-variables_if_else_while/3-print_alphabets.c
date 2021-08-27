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

	for (n = 97; n <= 122; ++n)
		putchar(n);
	for (n = 65; n <= 90; ++n)
		putchar(n);
	putchar(10);
	return (0);
}
