#include "main.h"

/**
 * print_last_digit - is a function that tells the last digit of the input.
 * Return: an int.
 *@n: parameter of type int.
 */

int print_last_digit(int n)
{
	if (n < 0)
                n *= -1;
	n %= 10;
	_putchar(n + '0');
	return (0);
}
