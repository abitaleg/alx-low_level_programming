#include <stdlib.h>
#include <stdio.h>
/**
 * main -Entry point
 * Return: 0;
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf((num % 10) + '0');
	}
	printf('\n');
	return (0);
}
