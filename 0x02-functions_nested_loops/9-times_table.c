#include "main.h"

/**
 * times_table - F prints the 9 times table
 */

void times_table(void)
{
	int r;
	int c;
	int rs;

	for (r = 0; r <= 9; r++)
	{
		_putchar(48);
		_putchar(',');
		_putchar(' ');
		for (c = 1; c <= 9; c++)
		{
			rs = r * c;
			if (rs <= 9)
			{
				_putchar(' ');
				_putchar(rs + 48);
			}
			else
			{
				_putchar(rs / 10 + 48);
				_putchar(rs % 10 + 48);
			}
			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
