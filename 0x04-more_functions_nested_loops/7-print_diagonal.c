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

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= n; j++)
				_putchar(32);
				_putchar(92);
				_putchar('\n');
		}
	}
}
