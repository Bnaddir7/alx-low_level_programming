#include "main.h"

/**
 * _strchr - Locates a char in a string
 *
 * @s: The string
 * @c: character
 *
 * Return: Returns a pointer to c in s,
 *	or NULL if c is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
	return (s);

	return ('\0');
}
