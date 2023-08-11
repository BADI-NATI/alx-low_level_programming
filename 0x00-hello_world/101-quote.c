#include <stdio.h>

/**
 * main - this is the main function.
 *
 * Return:  must always be zero.
 */

int main(void)
{
	char message[] = "with proper grammar, but the outcome is a piece of art,\n";
        write(1, message, sizeof(message) - 1);
	return (0);
}
