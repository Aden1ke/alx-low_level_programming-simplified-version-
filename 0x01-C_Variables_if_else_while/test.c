#include <stdio.h>
int main(void)
{
    int i,j,rows = 0;
    printf("enter number of rows:");
    scanf("%d",&rows);
    for ( i = 1; i <=rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
               printf("%c ", 64+i);
        }
        printf("\n");
    
    }
    
}