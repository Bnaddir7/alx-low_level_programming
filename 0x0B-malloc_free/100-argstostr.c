#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all args of the program.
 * @ac: argc
 * @av: argv
 *
 * Return: new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int total_len = 0;
	int i, j;
	char *result;
	int index;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_len++;
		}
		total_len++;
	}
	result = (char *)malloc(sizeof(char) * total_len);
	if (result == NULL)
	{
		return (NULL);
	}
	index = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[index] = av[i][j];
			index++;
		}
		result[index] = '\n';
		index++;
	}
	result[index] = '\0';
	return (result);
}
