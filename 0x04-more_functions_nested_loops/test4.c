#include <stdio.h>

int main(void)
{
    int i,j,num,rows;
    printf("input the number of rows :");
    scanf("%d", &rows);
        for ( i = rows; i >= 1; i--)
    {
        num = rows;
for (j = i; j >= 1; j--)
{
    
    printf("%d", num);
    ++num;
}
num = rows;
printf("\n");
    }    
}

/**
 * 54321
 * 4321
 * 321
 * 21
 * 1
*/