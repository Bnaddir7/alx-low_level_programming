#include "main.h"

/**
 * _strpbrk - Fuction locates the first occurrence in the string s.
 *
 * @s: string
 * @accept: string
 *
 * Return: Returns a pointer to the byte in s
 *	that matches one of the bytes in accept,
 *		or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return ('\0');
}
