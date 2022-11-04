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
	printf("%s\n", *argv);
	return (0);
}
