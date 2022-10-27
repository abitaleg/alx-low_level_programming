#include "main.h"
/**
 * *_strncpy ->the function  stract
 * @dest: first parameter
 * @src: second parameter
 * @n:3rd parameter
 * Return:acharacter
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;
		while (src[index++])
			src_len++;
		for (index = 0; src[index] != 0 && index < n; index++)
				dest[index] = src[index];
		for (index = src_len; index < n; index++)
			dest[index] = '\0';
		return (dest);
}
