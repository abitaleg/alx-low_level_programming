#include <stdlib.h>
#include <stdlib.h>
#include <time.h>

/* main: entry point*/

/*description: Complete the source code in order to print whether the number stored in the variable n is positive or negative. */
/*return: 0 */


int main(void)
        
{

     int n;
			
     srand(time(0));
  
     n = rand() - RAND_MAX / 2;

     if(n<0);

     {    

            printf("%d is negetive\n", n);

     }   

     else (n==0);

     { 

            printf("%d is zero\n", n); 

     }

     else if(n>0);

     {

             printf("%d is posetive\n", n);	


     }
     
     return (0);

}
