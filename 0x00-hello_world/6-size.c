#include <stdio.h>
#include <stdlib.h>
/**
 * main-prints the size of various types on the computer.
 *
 * Return:0
*/

int main(void)
{
	/*char = 1 byte(s);
	int = 4 byte(s);
	long = 4 byte(s);
	long long = 8 byte(s);	
	float = 4 byte(s);*/
	printf("%lu\n", sizeof(char));
       	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(float));
	printf("%lu", sizeof(long));
	printf("%lu", sizeof(long long));
	return (0);
}

