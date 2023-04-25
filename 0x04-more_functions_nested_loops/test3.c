#include <stdio.h>

int main(void)
{
    int i,j;
        for ( i = 5; i >= 1; i--)
    {
       
for (j = 1; j <= i; j++)
{
    
    printf("%c", 64 + j);
}
printf("\n");
    }    
}
/**
 * 5
 * 54
 * 543
 * 5432
 * 54321
*/