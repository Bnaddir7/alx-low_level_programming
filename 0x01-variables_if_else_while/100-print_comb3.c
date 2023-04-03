#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int n = 0, i;

	while (n <= 9)
	{
		i = 0;
		while (i <= 9)
		{
			if (n != i && n < i)
			{
				putchar(n + 48);
				putchar(i + 48);

				if (n + i != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			i++;
		}
		n++;
	}
	putchar('\n');

	return (0);
}
