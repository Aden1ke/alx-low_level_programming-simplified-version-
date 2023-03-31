#include "main.h"
#include <string.h>

void puts_half(char *str)
{
    int i;
    int len = strlen(str);
    if (len % 2 == 0)
    {
   for (i =(len + 1)/2; i < len; i--)
    {
        _putchar(str[i]);
    }
}
else 
{
    for (i = len/2; i < len; i--)
    {
        _putchar(str[i]);
    }
    }
}
/*OR*/
/*
#include "main.h"
#include <string.h>
void puts_half(char *str)
{
    int i;
    int len = strlen(str);
    if (len % 2 == 0)
    {
        i = len/2;
   while (i < len)
    {
        _putchar(str[i]);
        i++;
    }
}
else 
{
    i = (len + 1)/2;
   while ( i < len)
    {
        _putchar(str[i]);
        i++;
    }
    }
    _putchar('\n');
}
*/



/*NOTE:
len % 2 == 0 (all even numbers can be divided by two without remainder,remainder is gotten by using (%) operend,therefore len(length of the string) % 2 == 0 is used to chech if len is even)
In the code, (len+1)/2 is used to find the starting position of the second half of the string when the length of the string is odd.

To explain it in simpler terms, let's consider an example. Suppose we have a string with a length of 5. If we divide the length of the string by 2, we get 2 (using integer division), which would give us the index of the middle character in the string.

However, since we want to print the second half of the string starting from the character after the middle character, we need to add 1 to the length of the string before dividing by 2. This ensures that we get the correct starting position for the second half of the string.

So, in the case of a string with a length of 5, (5+1)/2 would give us 3, which is the index of the starting position of the second half of the string.
*/