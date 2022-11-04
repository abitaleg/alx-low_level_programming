#include <stdio.h>
#include <stdlib.h>

/**
 *main - print the name of the program
 *@argc:count arguments
 *@argv:arguments
 *Return: Alwayes 0 (success)
 */
int main(int argc, char *argv[])
{
	int result = 0, num, i, j, k;
		if (argc == 1)
		printf("0\n");
	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			printf("%s\n", "Error");
		return (1);
		}
	}
	for (k = 0; k < argc; k++)
	{
		num = atoi(argv[k]);
		result += num;
	}
	printf("%d\n", num);
	return (0);
}
