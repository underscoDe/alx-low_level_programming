#include "main.h"
#include <stddef.h>

/**
 * string_nconcat - concatenates 2 strings, takes the first n chars of s2
 * @s1: string 1
 * @s2: string 2
 * @n: amount of chars to be used from s2
 *
 * Return: pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	int i = 0, j = 0, size_1 = strlen(s1), size_2;

	n < (unsigned int) strlen(s2) ? (size_2 = n) : (size_2 = strlen(s2));
	new_string = (char *) malloc(size_1 + size_2 + 1);
	if (new_string != NULL)
	{
		for (; i < size_1; i++)
		{
			new_string[i] = s1[i];
		}
		for (; j < size_2; j++)
		{
			new_string[i + j] = s2[j];
		}
		new_string[i + j] = '\0';
	}
	else
	{
		return (NULL);
	}

	return (new_string);
}
