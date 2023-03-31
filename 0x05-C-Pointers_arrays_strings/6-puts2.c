#include "main.h"
void puts2(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i += 2)
    {
        _putchar(str[i]);
    }
    _putchar('\0');
}
/*OR*/
/*
#include "main.h"
void puts2(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i += 2;
    }
    _putchar('\0');
}
*/


/*The task is to write a function that takes a string as input and prints every other character of the string, starting with the first character,
in the example above, the function takes a string str as input and uses a for loop to iterate over every other character of the string, starting with the first character (i.e., index 0). The loop increment is set to 2 to skip every other character.*/