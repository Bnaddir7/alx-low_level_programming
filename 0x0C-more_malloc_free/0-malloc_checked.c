#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size
 *
 * Return: returns ptr, if fails
 *	exit the program with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;
	
	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
