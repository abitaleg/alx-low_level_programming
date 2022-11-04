#include "main.h"

/**
 *_isdigit-> checks if the numbers 0 - 9.
 *@c: is a caracter
 *Return: 0, 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
