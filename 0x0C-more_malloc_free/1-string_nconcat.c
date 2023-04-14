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
	unsigned int s1_len, s2_len;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_len = 0;
	s2_len = 0;
	while (s1[s1_len] != '\0')
	{
		s2_len++;
	}
	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}
	if (n >= s2_len)
		n = s2_len;

	result = (char *) malloc(sizeof(char) * (s1_len + n + 1));

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		result[i] = s2[j];
		i++;
	}
	result[i] = '\0';

	return (result);
}
