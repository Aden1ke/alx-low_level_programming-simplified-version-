#include "main.h"
void print_times_table(int n)
{
    if (n < 15 && n > 0)
    {
        int num1;
        int num2;
        int result;
        for (num1 = 0; num1 <= 15; num1++)
        {
            for (num2 = 0; num2 <= 15; num2++)
            {
                result = num1 * num2;
                /*to print 3 digits number*/
                if (result >= 100)
                {
                    /* print the first digit */
                    _putchar((result / 100) + '0');
                    /*print the second digit */
                    _putchar((result / 10) % 10 + '0');
                    /*print the third digit*/
                    _putchar((result % 10) + '0');
                }
                /*to print two digits number*/
                else if (result >= 10)
                {
                    /*print the 1st digit*/
                    _putchar((result / 10) + '0');
                    /*print the last digit*/
                    _putchar((result % 10) + '0');
                }

                else
                {
                    /*to print numbers in using putchar(+'0)*/
                    _putchar(result + '0');
                }
                _putchar(',');
                _putchar(' ');
            }
            _putchar('\n');
        }
    }
}