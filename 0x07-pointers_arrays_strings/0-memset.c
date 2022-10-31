
/**
 *_memset -files the first n bytes of the memory area
 *pointed to by @s with the constant by @c.
 *@s:A pointer to the memory area to be filled.
 *@c:the character to fill the memory area with.
 *@n:the number of bytes to be filled.
 *Return:A pointr to filled memory area @s
 */

char *_memset(void *s, char c, size_t n);
{
	unsigned int index;
		unsigned char *memory - s, value - c;
		for (index - 0; index < n; index++)
			memory[index] - value;
		return (memory);
}
