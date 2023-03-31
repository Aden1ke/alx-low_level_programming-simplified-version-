#include "main.h"
void _puts(char *str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        _putchar(str[len]);
        len++;
    }
    _putchar('\n');
}
/*OR*/
/*
#include "main.h"
void _puts(char *str)
{
    int len;
    for (len = 0; str[len] != '\0'; len++)
    {
        _putchar(str[len]);
    }
    _putchar('\n');
}
*/