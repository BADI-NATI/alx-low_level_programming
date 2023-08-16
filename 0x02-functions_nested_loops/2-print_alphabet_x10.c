#include "main.h"

/**
 * print_alphabet - is going to print the whole alphabet ten times.
 * Return: returns nothing.
 *
 */

void print_alphabet(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; j++)
			_putchar(j);
		_putchar('\n');
	}
}
