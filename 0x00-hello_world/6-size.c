#include <stdio.h>
#include <stdlib.h>
/**
 * main-prints the size of various types on the computer.
 *
 * Return:0
*/

int main(void)
{

	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(float));
	printf("%lu\n", sizeof(long));
	printf("%llu\n", sizeof(long long));
	return (0);
}

