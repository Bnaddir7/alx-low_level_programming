#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer
 *	 to a newly allocated space in memory
 * @str: copy of the string
 * Return: returns NULL if str = NULL,
 *	otherwise, On success the function returns a pointer
 */

char *_strdup(char *str)
{
	int len = 0, i;
	char *dup_str;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	dup_str = malloc(len + 1);
	if (dup_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		dup_str[i] = str[i];
	}
	return (dup_str);
}
