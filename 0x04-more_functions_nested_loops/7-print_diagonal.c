#include "main.h"

/**
 * print_diagonal -> prints a diagonal line
 * @n: number of a line
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int j;


	for (j = 0; j < n; j++)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
		_putchar('\n');
	}
}
