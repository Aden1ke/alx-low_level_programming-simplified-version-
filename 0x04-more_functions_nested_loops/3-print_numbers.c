#include "main.h"
void print_numbers(void)
{
    int i;
    for ( i = 0; i <= 9; i++)
    {
        _putchar (i + '0');
    }
    _putchar('\n');
}
/**
 * In C programming, _putchar is a function that writes a single character to the standard output. 
 * The parameter i in the expression _putchar(i + '0') represents an integer value, 
 * and i + '0' is an expression that adds the integer value of i to the ASCII value of the character '0'
*/