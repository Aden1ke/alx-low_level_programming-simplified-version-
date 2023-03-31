#include "main.h"
int print_last_digit(int n)
{
if (n <= 0)
{
    n = n * -1;
    _putchar(n + '0');
return (n % 10);
}
else{
     _putchar(n + '0');
   return (n % 10); 
}
}