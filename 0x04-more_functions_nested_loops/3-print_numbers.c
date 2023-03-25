#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 */
void print_numbers(void)
{
	int n = 0;

	do {
		_putchar(n + 48);
		n++;
	} while (n >= 0 && n <= 9);
	_putchar('\n');
}
