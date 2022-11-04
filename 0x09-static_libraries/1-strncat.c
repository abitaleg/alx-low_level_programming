#include "main.h"
/**
 * *_strncat ->the function  stract
 * @dest: first parameter
 * @src: second parameter
 * @n:3rd parameter
 * Return:acharacter
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;
		while (dest[len])
			len++;
		for (i = 0; src[i] != 0 && i < n; i++)
		{
			dest[len] = src[i];
			len += 1;
		}
		dest[len] = '\0';
		return (dest);
}
