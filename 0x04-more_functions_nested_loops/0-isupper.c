#include "main.h"

/**
 * _isupper -> checks if c is uppercase or not.
 * @c: is the charcter
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
