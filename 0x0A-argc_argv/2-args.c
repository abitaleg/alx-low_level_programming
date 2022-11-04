#include <stdio.h>
#include "main.h"

/**
 *main - print the name of the program
 *@argc:count arguments
 *@argv:arguments
 *Return: Alwayes 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;
	for  (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	
	return (0);
}
