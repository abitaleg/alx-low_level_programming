#include <stdio.h>
#include <stdlib.h>
/**
 * main-prints the size of various types on the computer.
 *
 * Return:0
*/

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	/**
	 * sizeof(int)="4 byte(s)"
	 * sizeof(char)="1 byte(s)"
	 * sizeof(float)="4 byte(s)"
	 * sizeof(long)="8 byte(s)"
	 * sizeof(long long)="8 byte(s)"
	*/
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long long int: %llu byte(s)\n", (unsigned long)sizeof(f);
	return (0);
}

