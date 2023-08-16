#include "main.h"

/**
 * print_sign - is a function that tells the sign of the input.
 * Return: returns 0 or 1 or -1.
 *@n: parameter of type int.
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
