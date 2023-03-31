
/*OR
#include "main.h"
int _strlen(char *s)
{
    int len;
    for (len = 0; s[len] != '\0'; len++)
        ;
    return (len);
}
*/
#include "main.h"
int _strlen(char *s)
{
    int len = 0;
    while (s[len] != '\0')
    len++
        ;
    return (len);
}