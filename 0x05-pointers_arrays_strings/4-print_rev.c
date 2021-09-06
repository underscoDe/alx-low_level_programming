#include <stdio.h>
#include "main.h"

/**
*rev_string - Reverse a string
*@s: String to reverse
*Return: Nothing
*/

void print_rev(char *s)
{
	int len = _strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
