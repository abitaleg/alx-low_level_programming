#include <unistd.h>

/**
 *_putchar -> writes a charcter c to stdout
 * @c:The chareter to print out
 * Return: on sucess on 1
 * on error, -1 is returned, and errno is set approxmatel
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}            
