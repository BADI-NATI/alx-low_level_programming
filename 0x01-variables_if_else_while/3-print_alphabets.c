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

	for (i = 65; i < 91; i++)
		putchar(tolower(i));
	for (n = 65; n < 91; n++)
		putchar(n);

	putchar('\n');
	return (0);
}
