#include "main.h"

/**
 * _isalpha - is going to check if c is a letter
 * or lower or uppercaseness of letters.
 * Return: returns 0 or 1.
 *@c: parameter of type int.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
