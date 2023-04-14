#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: value
 * @max: value
 *
 * Return: it returns NULL if min greather than max
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
