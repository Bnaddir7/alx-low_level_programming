#include "main.h"

/**
 * string_toupper - changes letters cases
 * @c: pointer to input char
 * Return: c
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 97 && c[i] <= 122)
			c[i] = c[i] - 32;
		i++;
	}
	return (c);
}
