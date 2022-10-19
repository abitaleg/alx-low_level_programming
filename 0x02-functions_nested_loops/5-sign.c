#include "main.h"
/**
 *print_sign -> check n and print sign.
 *@n:argument passed
 *Return: 0,-1 or 1 depend on the condition.
 */

int print_sign(int n)
{

	if (n > 0)
	{
		putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		putchar('0');
		return (0);
	}

	else
	{
		putchar('-');
		return (-1);
	}
}
