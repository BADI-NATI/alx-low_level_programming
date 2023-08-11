#include <stdio.h>
#include <unistd.h>
/**
 * main - this is the main function.
 *
 * Return:  must always be zero.
 */

int main(void)
{
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	write(1, message, sizeof(message) - 1);
	return (0);
}
