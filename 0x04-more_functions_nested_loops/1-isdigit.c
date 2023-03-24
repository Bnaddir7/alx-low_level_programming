#include "main.h"

/**
 * _isdigit - function checks for digit
 * @c: takes a value of inputs
 * Return: 1 if c is a digit else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57 && c++)
		return (1);
	else
		return (0);
}
