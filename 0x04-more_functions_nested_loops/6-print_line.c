#include"main.h"

/**
 * print_line - F that prints a straight line
 * @n: is the number of times the _ character
 */

void print_line(int n)
{
	int cht;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (cht = 1; cht <= n; ++cht)
		{
			_putchar('_');
			_putchar('\n');
		}
	}
}
