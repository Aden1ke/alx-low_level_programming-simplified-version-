#include "main.h"
void print_square(int size)
{
    int i,j;
        for ( i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)
        {
               _putchar('#');
        }
        _putchar('\n');
    
    }
    
}
/**
 * The function prints a square made up of size number of rows and size number of columns using the '#' symbol. 
 * It uses two loops to print the square, an outer loop that iterates over each row and an inner loop that iterates over each column in that row.
 * 
 * For each row, the inner loop prints the '#' symbol size number of times.
 *  The _putchar function is used to print each symbol to the console. Finally, the inner loop prints a new line character (\n) to move to the next row.
*/