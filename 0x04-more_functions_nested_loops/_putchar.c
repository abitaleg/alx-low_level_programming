#include <unistd.h>
#include "main.h"

/**
 * _putchar -> printes the char c to stdout.
 * @c: is the character
 * Return: 1 or 0 depend o the condition
 */
int _putchar(char c)
{
return (write(1, &c, 1)); 
}

