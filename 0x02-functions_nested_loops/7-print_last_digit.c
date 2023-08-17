#include "main.h"

/**
 * print_last_digit - is a function that tells the last digit of the input.
 * Return: an int.
 *@n: parameter of type int.
 */

int print_last_digit(int n)
{
	int k;

	k = n % 10;
	if (k < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
