#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: address of the pointer
 * @to: new value
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
