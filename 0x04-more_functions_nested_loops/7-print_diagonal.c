#include "main.h"
void print_diagonal(int n)
{
    int i, j;
    if (n <= 0)
    {
        _putchar('\n');
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == i)
            {
                _putchar('\\');
            }
            _putchar(' ');
        }
        _putchar('\n');
    }
}

/**
 * The first if statement checks if n is less than or equal to 0. If it is, a newline character is printed and the function returns without executing the rest of the code. This is done to handle the case where n is 0 or negative.
 * 
 * The outer for loop runs from i=1 to i=n. This controls the number of rows printed.
 * 
 * The inner for loop runs from j=1 to j=i. This controls the number of backslashes printed in each row.
 * 
 * If j is equal to i, it means that it is the last iteration of the inner loop and we are in the last column of the row. Therefore, a backslash character is printed. If j is not equal to i, it means that we are not in the last column of the row, and a space character is printed instead.
 * 
 * After each row is printed, a newline character is printed to move to the next row.
*/