#include <stdio.h>

int main(void)
{
    int i,j,space,rows;
    printf("input the number of rows :");
    scanf("%d", &rows);
        for ( i = 1; i <= rows; i++)
    {
        for (space = 1; space <= i -1; space++)
        {
            printf(" ");
        }
        
        
for (j = 1; j <= i; j++)
{
    
    printf("*" );
   
}

printf("\n");
    }    
}
