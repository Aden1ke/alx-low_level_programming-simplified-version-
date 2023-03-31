#include <string.h>
#include "main.h"
void print_rev(char *s)
{
    int i = strlen(s) - 1;
    while (i >= 0)
    {
        _putchar(s[i]);
        i--;
    }
    _putchar('\n');
}
/*OR*/
/*
#include <string.h>
#include "main.h"
void print_rev(char *s)
{
    int i;
    for (i = strlen(s) -1; i >= 0; i--)
    {
        _putchar(s[i]);
    }
    _putchar('\n');
}
*/

/*
Note: strlen is used to check length of a string(in a string a null character('\0') is always added at the end of a string so to stop that from printing minus 1 e.g where s is the pointer(_strlen(s) -1),that will print the string without the null character.string.h is the header file where the stardard libery is stored */