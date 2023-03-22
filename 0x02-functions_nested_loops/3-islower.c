#include "main.h"

/**
 * _islower - function to check if
 *           character is lowercase
 *
 * @c: an argument to be checked
 *
 * Description: this code for cheking a lowercase alphabet
 *
 * Return: if true 1, else 0
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
