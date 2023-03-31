#include "main.h"
void print_number(int n){
    if (n < 0)
{
_putchar('-');
n = -n;
}
    if (n <=0 || n >= 0){
        if (n >= 1000){
 /* print the first digit */
            _putchar((n / 1000 ) + '0');
            /* print the 2 digit */ 
          _putchar((n / 100 ) + '0');
/*print the 3 digit */
         _putchar((n / 10 ) % 10 + '0');
 /*print the 4 digit*/   
         _putchar((n % 10 ) + '0');
        }
      else if (n >= 100)
        {
/* print the first digit */ 
          _putchar((n / 100 ) + '0');
/*print the second digit */
         _putchar((n / 10 ) % 10 + '0');
 /*print the third digit*/   
         _putchar((n % 10 ) + '0');
        }
        /*to print two digits number*/
        else if (n >= 10)
        {
            /*print the 1st digit*/
         _putchar((n/ 10 ) + '0');
          /*print the last digit*/
         _putchar((n % 10 ) + '0');

        }
        
        else
        {
/*to print numbers in using putchar(+'0')*/
       _putchar(n + '0');
        }
    }
}

/*OR*/
/*void print_number(int n)
{
	unsigned int number;

	if (n < 0)
	{
		number = -n;
		_putchar('-');
	}
	else
	{
		number = n;
	}

	if (number / 10)
	{
		print_number(number / 10);
	}
	_putchar((number % 10) + '0');
}*/