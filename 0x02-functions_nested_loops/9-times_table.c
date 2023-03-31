#include "main.h"
void times_table(void){
    int num1;
    int num2;
    int result;
    for (num1 = 0; num1 <= 9; num1++)
    {
        for (num2 = 0; num2 <= 9; num2++)
    {
        result = num1 * num2;
         /*to print two digits number*/
        if (result >= 10)
        {
        /*print the 1st digit*/
         _putchar((result / 10 ) + '0');
          /*print the last digit*/
         _putchar((result % 10 ) + '0');

        }
        else
        {
       _putchar(result + '0');
        }        
        _putchar(',');
        _putchar(' ');
    }
    _putchar('\n');
    }
    
}