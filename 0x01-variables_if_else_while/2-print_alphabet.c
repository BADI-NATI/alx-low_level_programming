#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
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
	int n;

	for (n = 65; n < 91; n++)
		putchar(tolower(n));
	printf("\n");
	return (0);
}
