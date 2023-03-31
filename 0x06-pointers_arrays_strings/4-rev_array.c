#include "main.h"

/**
 * reverse_array - reverses the content
 * @a: content of an array
 * @n: nbr of elements o the array
 */

void reverse_array(int *a, int n)
{
	int tmp, s, e;

	s = 0;
	e = n - 1;
	while (s < e)
	{
		tmp = a[s];
		a[s] = a[e];
		a[e] = tmp;
		s++;
		e--;
	}
}
