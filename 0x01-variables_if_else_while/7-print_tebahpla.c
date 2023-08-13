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

	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
