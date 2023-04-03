#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int n = 0, i, s;

	while (n <= 9)
	{
		i = 0;
		while (i <= 9)
		{
			s = 0;
			while (s <= 9)
			{
				if (n != i && n < i &&
					i != s && i < s)
				{
					putchar(n + 48);
					putchar(i + 48);
					putchar(s + 48);

					if (n + i + s != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				s++;
			}
			i++;
		}
		n++;
	}
	putchar('\n');

	return (0);
}
