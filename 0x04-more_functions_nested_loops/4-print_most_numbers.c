#include "main.h"
void print_most_numbers(void)
 {
    int i;
    for ( i = 0; i <= 9; i++)
    {
        if (i == 2 || i == 4)
        {
            continue;
        }
        else
        {
_putchar (i + '0');
        }
    }
    _putchar('\n');
}

/*OR*/
/*#include "main.h"
void print_most_numbers(void)
 {
    int i = 0;
while (i <= 9)
    {
       if (i != 2 && i != 4)
       {
        _putchar (i + '0');
       }
i++;
    }
     _putchar('\n');
 }*/

    