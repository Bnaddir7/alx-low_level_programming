#include "main.h"

/**
 * _abs - Function that computes the abs value on integer
 *
 * @n: takes integer type input for f
 *
 * Return: if n < O returns to -n else n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
