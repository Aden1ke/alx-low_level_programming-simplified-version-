#include <stdio.h>
int main(void) {
    int n;
    for (n = 0; n <= 9; n++)
    {
    	 printf("%d", n);	
	if (n != 9)
	{
		putchar(',');
	 putchar(' ');
	}
	}
    putchar('\n');
    return (0);    
}