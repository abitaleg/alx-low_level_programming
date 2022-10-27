#include "main.h"
#include <string.h>
/**
 * *_strncpy ->the function  stract
 * @dest: first parameter
 * @src: second parameter
 * @n:3rd parameter
 * Return:acharacter
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
