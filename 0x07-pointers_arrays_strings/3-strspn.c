#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: The initial segment
 * @accept: bytes
 *
 * Return: The number of bytes in the initial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *p = accept;

	while (*s)
	{
		while (*p)
		{
			if (*s == *p)
			{
				len++;
				break;
			}
			p++;
		}
		if (!*p)
		{
			break;
		}
		s++;
		p = accept;
	}
	return (len);
}
