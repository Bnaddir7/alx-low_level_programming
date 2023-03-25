#include "main.h"

/**
 * print_most_numbers - F that prints a specail nums
 *
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;	/* skip printing 2 and 4 */
		}
		_putchar(n + 48);
	}
	_putchar('\n');
}
