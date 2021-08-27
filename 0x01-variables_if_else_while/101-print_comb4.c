#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int c, c_two, c_three;

	for (c = 48; c <= 55; c++)
	{
		for (c_two = c + 1; c_two <= 56; c_two++)
		{
			for (c_three = c_two + 1; c_three <= 57; c_three++)
			{
				putchar(c);
				putchar(c_two);
				putchar(c_three);
				if (c != 55 || c_two != 56 || c_three != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar(10);
	return (0);
}
