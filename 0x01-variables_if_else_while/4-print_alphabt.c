#include <stdio.h>

/**
 * main - Entry point
 * Return: 0.
 */

int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if (alph == 'e' || alph == 'q')
			alph++;
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
