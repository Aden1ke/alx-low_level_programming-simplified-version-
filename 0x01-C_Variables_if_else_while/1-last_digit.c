
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
int n,last;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
    last = n % 10;
     if (last > 5)
    {
        printf("Last digit of %d is %d and is greater than 5\n", n,last);
            }
     else if (last > 6 && last != 0) /*NOTE:AND(&&) operand means when both statement are true the conditions are being met printf would be printed but if only on is true then it means both are false then the conditions are not met then elseif statement will be skipped*/
     {
           printf("Last digit of %d is %d and is less than 6 and not zero\n", n,last);
     }
     else
     {
           printf("Last digit of %d is %d and is 0\n", n,last);
              }  
	return (0);
}
