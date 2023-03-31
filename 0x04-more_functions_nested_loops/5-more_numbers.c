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