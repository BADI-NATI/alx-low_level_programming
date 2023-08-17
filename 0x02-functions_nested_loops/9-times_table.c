#include "main.h"

/**
 * times_table - is a function that lists time table.
 * Return: no return it's void.
 */

void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (product < 10)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');
			_putchar((product % 10) + '0');

			if (j == 9)
				_putchar('\n');
		}
	}
}
