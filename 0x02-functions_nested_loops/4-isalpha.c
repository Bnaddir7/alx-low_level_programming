#include "main.h"

/**
 * _isalpha - function that checks alphabetic
 * @c: argu
 * Return: 1 if true, otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 &&
		c >= 97 && c <= 122)
		return (1);
	return (0);
}
