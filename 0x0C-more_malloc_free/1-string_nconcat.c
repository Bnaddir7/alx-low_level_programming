#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: seconf string
 * @n: bytes
 * Return: returns a pointer but if fails,
 *	returns NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	size_t size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size = strlen(s1) + (n >= strlen(s2) ? strlen(s2) : n) + 1;
	result = malloc(size);
	if (result == NULL)
	{
		return (NULL);
	}
	strncpy(result, s1, size);
	strncpy(result, s2, n);

	return (result);
}
