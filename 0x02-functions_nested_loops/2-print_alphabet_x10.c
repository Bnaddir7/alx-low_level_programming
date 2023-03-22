#include "main.h"

/*
 * main - Entry point.
 * Description: function that prints 10 times the alphabet.
 * Return: Always 0.
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
