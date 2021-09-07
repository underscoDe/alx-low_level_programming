#include <limits.h>
#include "main.h"

/**
* _atoi - Converts string to integer
* @str: string to convert
*
* Return: the integer value of the given string
*/


int _atoi(char* str)
{
	int sign = 1, base = 0, i = 0, comp = INT_MAX / 10;

	while (*(str + i) == ' ')
		i++;

	if (*(str + i) == '-' || *(str + i) == '+')
		sign = 1 - 2 * (str[i++] == '-');

	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		if (base > comp || (base == comp && *(str + i) - '0' > 7))
		{
			if (sign == 1)
				return INT_MAX;
			else
				return INT_MIN;
		}
		base = 10 * base + (*(str + i++) - '0');
	}

	return base * sign;
}
