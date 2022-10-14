#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/* *
 * maib - block
 * Description:Complete the source code in order to print whether the number stored in the variable n is positive or negative.
 * Return: 0
 */
int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

				if (n<0)
					{
					printf("%d is negetive\n", n);
					}
				else if (n==0)
					{
					printf("%d is zero\n", n);
					}
				else
					{
						printf("%d is posetive\n", n);
					}			

					return (0);

}

