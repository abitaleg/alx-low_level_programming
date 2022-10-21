#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers -> prints the numbers, from 0 to 9
 * Return: void
 */
void print_most_numbers(void)
{
	char c;

	for (c = 48; c < 58; c++)
	{
		if (!(c == 50 || c == 52))
		{
			continue;
		}
		putchar(c);
	}
	putchar(10);
}
