#include <stdio.h>
#include "main.h"

/**
 *_puts2 - prints every other character
 * @str: string
 *
 * On success: returns no error
 */

void _puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 2)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
