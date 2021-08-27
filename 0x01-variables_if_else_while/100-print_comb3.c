#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int c, c_two;

	for (c = 48; c <= 56; c++)
	{
		for (c_two = c + 1; c_two <= 57; c_two++)
		{
			putchar(c);
			putchar(c_two);
			if (c != 56 || c_two != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar(10);
	return (0);
}
