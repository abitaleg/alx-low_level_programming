#include "main.h"

/**
 *_memset -files the first n bytes of the memory area
 *pointed to by @s with the constant by @c.
 *@s:A pointer to the memory area to be filled.
 *@b:the character to fill the memory area with.
 *@n:the number of bytes to be filled.
 *Return:A pointr to filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
		for (; n > 0; i++)
		{
			s[1] = b;
			n--;
		}
		return (s);
}
