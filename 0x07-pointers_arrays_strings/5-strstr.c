#include "main.h"

/**
 * _strstr - Locates a substring
 *
 * @haystack: string
 * @needle: Substring
 *
 * Return: Returns a pointer to the beginning of the located substring,
 *	or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' &&
				haystack[i + j] == needle[j]; j++)
		{
			if (needle[j + 1] == '\0')
			{
				return (&haystack[i]);
			}
		}
	}
	return ('\0');
}
