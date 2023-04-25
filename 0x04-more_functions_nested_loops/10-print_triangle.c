#include "main.h"
void print_triangle(int size)
{
    int i,j;
    if (size == 0)
    {
      _putchar('\n');  
    }
        for ( i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)
        {
            if (j + i <= size)
            {
               _putchar(' ');
        }
        else
        _putchar('#');      
            } 
            _putchar('\n');
    }
   
}

/**
 * NOTE
 * 
 * for ( i = 1; i <= size; i++) - a loop that iterates i from 1 to size, inclusive.
 *  This controls the number of rows of the triangle.
 * 
 * for (j = 1; j <= size; j++) - a nested loop that iterates j from 1 to size, inclusive
 * This controls the number of columns of the triangle.
 * 
 * The if condition if (j + i <= size) checks whether the sum of the values of j and i is less than or equal to size.
 *  If this condition is true, it means that the current position of the loop is such that it needs to print a space instead of the '#' character.
 * 
 * For example, let's consider a size value of 5. When i and j are both 1, the sum of i and j is 2.
 *  Since 2 is less than or equal to size, which is 5 in this case, the condition j + i <= size is true,
 *  and the program will print a space character.
 * 
 * On the other hand, when i is 1 and j is 3, the sum of i and j is 4. Since 4 is greater than size, the condition j + i <= size is false, and the program will print a '#' character. 
 * This process repeats until the entire triangle is printed.
 */

/**OR
 * 
 * #include "main.h"
 * void print_triangle(int size)
 * {
 *     int i,j; 
 *    if (size == 0)
 *     {
 *       _putchar('\n');
 *     }
 *     else
 *     {
 *         for ( i = 1; i <= size; i++)
 *         {
 *             for (j = size; j > i; j--)
 *             {
 *                 _putchar(' ');
 *             }
 *             for (j = 1; j <= i; j++)
 *             {
 *                 _putchar('#');
 *             }
 *             _putchar('\n');
 *             }
 *     }
 * }
 * 
 * The function first checks if the size of the triangle is 0, in which case it prints a newline character and exits the function.
 * 
 * If the size of the triangle is not 0, the function prints a right-angled triangle made of hash symbols (#).
 * 
 * It does this by using two nested for-loops. The outer for-loop iterates from 1 up to size and controls the number of rows in the triangle.
 * 
 * The first inner for-loop prints the spaces to the left of each row of hash symbols. It prints spaces until it reaches the number of spaces equal to the difference between size and the current row number.
 * This line of code initializes j to the value of size and then decrements it until it's greater than i. This is used to print spaces before the # symbols in each row.
 * 
 * For example, if size is 5 and i is 2, the inner loop will start with j being 5 and continue until j is greater than i (in this case, until j is 3). 
 * In each iteration, a space character will be printed before the # symbol. 
 * This results in the second row having three spaces followed by two # symbols.
 */