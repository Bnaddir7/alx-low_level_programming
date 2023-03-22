#include "main.h"

/**
 * void - Print alphabet
 *
 * Description: Function that prints ten times the alphabet.
 *
 * Return: Always 0
 *
 */

void print_alphabet_x10(void)
{
	int line, i;

	for (line = 0; line <= 9; ++line)
	{
		for (i = 'a'; i <= 'z'; ++i)
			_putchar(i);
		_putchar('\n');
	}
}
