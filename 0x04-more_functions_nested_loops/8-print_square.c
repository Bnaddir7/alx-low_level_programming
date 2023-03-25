#include"main.h"

/**
 * print_square - F prints a square using the character #
 * @size: is the size of the square
 */

void print_square(int size)
{
	int n, i;

	for (n = 1; n <= size; ++n)
	{
		for (i = 1; i <= size; ++i)
			_putchar('#');
		_putchar('\n');
	}
}
