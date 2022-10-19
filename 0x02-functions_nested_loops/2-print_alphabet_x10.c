#include "main.h"

/**
 *2-print_alphabet_x10.c - it prints lower case alphabet x10
 *@void: comparer the charcters
 */

void print_alphabet_x10(void)

{
	int i;
	int x;

		for (x = 0; x < 10; x++)

		{
			for (i = 'a'; i <= 'z'; i++)
			{
				_putchar(i);
			}
			_putchar('\n');
		}
}
