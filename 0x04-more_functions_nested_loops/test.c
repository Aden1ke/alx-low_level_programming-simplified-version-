#include <stdio.h>

int main(void)
{
    int i,j,num = 1,rows;
    printf("input the number of rows :");
    scanf("%d", &rows);
    for ( i = rows; i >= 1; i--)
    {
for (j = i; j >= 1; j--)
{
    printf("%d", num);
    num++;
}
num = 1;
printf("\n");
    } 
    return (0);   
}
/**NOTE
 * i and j are loop counters, num is used to keep track of the number being printed, and rows is the number of rows for the pattern.
 * 
 * The program then prompts the user to input the number of rows they want to print.
 * 
 * The outer loop for (i = rows; i >= 1; i--) starts from the number of rows and decrements by 1 until it reaches 1. This loop is used to print the rows of the pattern.
 * 
 * The inner loop for (j = i; j >= 1; j--) starts from the current value of i and decrements by 1 until it reaches 1. This loop is used to print the numbers in each row.
 * 
 * Inside the inner loop, the current value of num is printed using printf("%d", num), and then incremented by 1.e.g
 * Here's an example iteration for rows = 3:
 * i = 3
 * inner loop: j = 3, print 1, num = 2
 * inner loop: j = 2, print 2, num = 3
 * inner loop: j = 1, print 3, num = 4
 * ans(123)
 * reset num = 1
 * print newline character \n
 * 
 * i = 2
 * inner loop: j = 2, print 1, num = 2
 * inner loop: j = 1, print 2, num = 3
 * ans== (
 *     123
 *     12
 * )
 * reset num = 1
 * print newline character \n
 * 
 * i = 1
 * inner loop: j = 1, print 1, num = 2
 * reset num = 1
 * print newline character \n
 * ans== (
 *     123
 *     12
 *     1
 * )
 * 
 * After the inner loop finishes, num is reset to 1 and a new line is printed using printf("\n").
 * The program continues to execute until the outer loop finishes and all rows of the pattern have been printed
 * 
*/
