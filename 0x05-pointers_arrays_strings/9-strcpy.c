#include "main.h"

/**
 *_strcpy -> prints  copies the string pointed to by src,
 * including the terminating null byte
 *@dest:destination
 *@src: source
 *Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
		while (*(src + len) != '\0')
		{
			*(dest + len) = *(src + len);
			len++;
		}
		*(dest + len) = '\n';
		return (dest);
}
