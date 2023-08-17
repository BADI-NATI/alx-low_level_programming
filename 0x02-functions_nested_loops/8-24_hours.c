#include "main.h"

/**
 * jack_bauer - is a function that lists time from 00:00 to 23:59.
 * Return: no return it's void.
 */

void jack_bauer(void)
{
	int i, j, k, l;
	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 24; j++)
		{
			for (k = 0; k < 60; k++)
			{
				for (l = 0; l < 60; l++)
				{
					_putchar(i / 10 + '0');
					_putchar(j % 10 + '0');
					_putchar(':');
					_putchar(k / 10 + '0');
					_putchar(l % 10 + '0');
					_putchar('\n');
		}	}	}
	}
}
