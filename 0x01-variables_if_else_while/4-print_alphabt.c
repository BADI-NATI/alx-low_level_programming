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

	for (i = 97; i < 123; i++)
	{
		if (i == 'q' || i == 'e')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
