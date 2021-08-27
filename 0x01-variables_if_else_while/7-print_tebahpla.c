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

	for (n = 122; n >= 97; --n)
	{
		putchar(n);
	}
	putchar(10);
	return (0);
}
