#include "main.h"

/**
 * _strncat - concatenates two strnigs
 * @dest: pointer to destination
 * @src: pointer to src
 * @n: number of bytes
 * Return: to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, d;

	c = 0;
	while (dest[c])
		c++;
	for (d = 0; d < n && src[d] != '\0'; d++)
		dest[c + d] = src[d];
	dest[c + d] = '\0';
	return (dest);
}
