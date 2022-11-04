#include "main.h"
/**
 *_abs -> absolute vale of a number
 *@n: on the parameter
 *Return: absolute vale of a number.
 */
int _abs(int n)
{
	if (n < 1)
		n = -n;
	return (n);
}
