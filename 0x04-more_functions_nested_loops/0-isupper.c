#include "main.h"

/**
 * _isupper - Function that checks fro uppercase
 * @c: takes the input value
 * Return: if true 1 else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90 && c++)
	{
		return (1);
	} else
		return (0);
}
