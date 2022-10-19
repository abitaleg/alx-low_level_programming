#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c is the char to print
 *
 * Return: on sucess 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

