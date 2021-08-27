#include <stdio.h>

/**
* main - Entry point
*
* Return: returns 0 when everything works fine
*
*/

int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c <= 56)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar(10);
	return (0);
}
