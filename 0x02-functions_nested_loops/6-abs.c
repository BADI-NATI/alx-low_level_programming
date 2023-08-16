#include "main.h"

/**
 * _abs - is a function that tells the absolute value of the input.
 * Return: an int.
 *@n: parameter of type int.
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	return (n);
}
