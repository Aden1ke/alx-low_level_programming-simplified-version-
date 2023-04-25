#include <stdio.h>

int main(void)
{
    int i,j,num,rows;
    printf("input the number of rows :");
    scanf("%d", &rows);
        for ( i = 1; i <= rows; i++)
    {
        num = rows;
for (j = i; j >= 1; j--)
{
    
    printf("%d", num);
    --num;
}
num = rows;
printf("\n");
    }    
}
/**
 * NOTE
 * 
 * The code above ask the user to input the number of rows they want to display in a certain pattern. It then uses a nested for loop to iterate through the rows and columns of the pattern.
 * 
 * The outer loop initializes the variable i to rows, which represents the number of rows specified by the user,
 *  and decrements i by 1 after each iteration. This controls the number of rows that will be displayed.
 * 
 * The inner loop initializes the variable j to i, which is the current row number, 
 * and decrements j by 1 after each iteration. This controls the number of columns that will be displayed for each row
 * 
 * The loop uses the variable num to keep track of the number that will be printed on each column.
 *  It is first set to rows, which represents the number of rows, and then decremented by 1 for each subsequent column until it reaches 1.
 * 
 * Finally, the loop prints a newline character to move to the next row and starts the next iteration of the outer loop
 * The result is a pattern of numbers that decrease in value as the number of rows increases.
 *
 *  Example:
 * 
 * Suppose the user inputs 4 as the number of rows. The program will output the following pattern:
 * 4
 * 43
 * 432
 * 4321

*/