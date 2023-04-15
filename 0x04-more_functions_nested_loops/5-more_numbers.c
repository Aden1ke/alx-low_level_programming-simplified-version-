/*#include"main.h"
void more_numbers(void)
{
    int i,j;
    for ( i = 0; i <= 10; i++)
    {
        for ( j = 0; j <= 14; j++)
        {
            if (j > 9)
            {
                _putchar((j / 10) + '0');
            }
            _putchar((j % 10) + '0');
        }
        _putchar('\n');
        
    }
}*/

#include"main.h"
void more_numbers(void)
{
    int i = 0;
    int j = 0; 
 while (i <= 10)
    {
        while (j <= 14)
        {
            if (j >= 10)
            {
        _putchar((j / 10) + '0');
            }
             _putchar((j % 10) + '0');
            j++;
        }
         _putchar('\n');
         j = 0; /*initialize j = 0 for loop to start over*/
        i++;
    }
}

/** NOTE*/
/**
 * (j / 10) calculates the integer division of j by 10, giving the tens digit of j. 
 * For example, if j is 37, it would evaluate to 3.
 * 
 * (j % 10) calculates the remainder of j divided by 10, giving the ones digit of j.
 *  For example, if j is 37, it would evaluate to 7.
 * 
 * (j / 10) + '0' adds the ASCII value of '0' to the tens digit, converting it to its ASCII character representation. ASCII values are integer representations of characters used by computers.
 *  For example, if the tens digit is 3, adding '0' would convert it to the ASCII character '3'.
 * 
 * (j % 10) + '0' adds the ASCII value of '0' to the ones digit, converting it to its ASCII character representation.
 * For example, if the ones digit is 7, adding '0' would convert it to the ASCII character '7'.
 * 
 * _putchar() function is then used to print the resulting ASCII characters as separate characters. 
 * For example, if j is 37, _putchar((j / 10) + '0') would print '3', and _putchar((j % 10) + '0') would print '7'.
*/