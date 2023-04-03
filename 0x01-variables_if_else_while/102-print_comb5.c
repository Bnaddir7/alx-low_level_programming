#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int n = 0, i;

	while (n <= 99)
	{
		i = n;
		while (i <= 99)
		{
			if (i != n)
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(' ');
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);

				if (n != 98 || i != 99)
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
