#include "main.h"

/**
 * _islower - is going to check for lower or uppercaseness of letters.
 * Return: returns 0 or 1.
 *@c: parameter of type int.
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
