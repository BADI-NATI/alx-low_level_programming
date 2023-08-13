#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - this is the main function.
 *
 * Return: always 0.
 */
int main(void)
{
	int i;
	int n;

	for (i = 48; i <= 56; i++)
	{
		for (n = i + 1; n <= 57; n++)
		{
			putchar(i);
			putchar(n);
			if (i == 56 && n == 57)
				continue;
			putchar(44);
			putchar(32);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
