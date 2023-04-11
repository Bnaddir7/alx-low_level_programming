#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Function that creates an array of chars
 * @size: the size of array to be created
 * @c: the char to initialize the array
 * Return: If the allocation was successful returns a pointer to the array
 *	otherwise, it return NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(array + i) = c;
	}
	return (array);
}
