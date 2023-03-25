#include "main.h"

/**
 * more_numbers - prints 10 times numbers 0-14
 */
void more_numbers(void)
{
	int i, c, n;

	for (i = 1; i <= 10; ++i)
	{

		for (c = 0; c < 15; c++)
		{
			n = c;
			if (c > 9)
			{
				_putchar(1 + 48);
				n = c % 10;
			}
			_putchar(n + 48);
		}
		_putchar('\n');
	}
}
