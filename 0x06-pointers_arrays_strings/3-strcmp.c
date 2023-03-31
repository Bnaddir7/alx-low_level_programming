#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: sec string
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, c;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			c = s1[i] - s2[i];
			break;
		}
		else
		{
			c = s1[i] - s2[i];
		}
		i++;
	}
	return (c);
}
