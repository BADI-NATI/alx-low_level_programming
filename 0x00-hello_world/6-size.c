#include <stdio.h>

/**
 * main - this is the main function.
 *
 * Return:  must always be zero.
 */

int main(void)
{
	printf("Size of char: %u byte(s)\n", sizeof(char));
	printf("Size of an int: %u byte(s)\n", sizeof(int));
	printf("Size of long int: %u byte(s)\n", sizeof(long));
	printf("Size of long long int: %u byte(s)\n", sizeof(long long));
	printf("Size of float: %u byte(s)\n", sizeof(float));
	return (0);
}
