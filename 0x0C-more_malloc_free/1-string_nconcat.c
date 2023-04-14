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
	size_t s1_len, s2_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if (n >= s2_len)
	{
		n = s2_len;
	}

	result = malloc(sizeof(char) * (s1_len + n + 1));

	if (result == NULL)
	{
		return (NULL);
	}
	strncpy(result, s1, s1_len);
	strncat(result, s2, n);

	return (result);
}
