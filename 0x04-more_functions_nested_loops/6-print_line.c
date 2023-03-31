/*#include "main.h"
void print_line(int n)
{
    int i;
    for ( i = 0; i <= n; i++)
    {
        if (n <= 0)
        {
             _putchar('\n');
        }
       _putchar('_');

    }
       _putchar('\n');
}
*/


/*OR*/
#include "main.h"
void print_line(int n)
{
    int i = 0;
    if (n >= 0)
    {
        while (i <= n)
               
        {
             _putchar('_');
             i++;
        }    
        _putchar('\n');
    }
}
/*OR*/
/*
#include "main.h"
void print_line(int n)
{
	int counter = 0;

	while (n > 0 && counter < n)
	{
		_putchar('_');
		counter++;
	}
	_putchar('\n');
}
*/

