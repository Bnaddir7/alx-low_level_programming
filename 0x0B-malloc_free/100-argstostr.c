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
	int i, arg_len;
	char *arg, *result;
	int index;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		arg_len = 0;
		while (arg[arg_len])
		{
			arg_len++;
		}
		total_len += arg_len + 1;
	}
	result = (char *)malloc(sizeof(char) * total_len);
	if (result == NULL)
	{
		return (NULL);
	}
	index = 0;
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		arg_len = 0;
		while (arg[arg_len])
		{
			result[index] = arg[arg_len];
			index++;
			arg_len++;
		}
		result[index] = '\n';
		index++;
	}
	result[index] = '\0';
	return (result);
}
