#include "main.h"
#include <string.h>
char *_strcpy(char *dest, char *src)
{
        int i,len = strlen(src);
    for ( i = 0; i <= len; i++)
    {
       dest[i] = src[i];
          }
           return (dest);

}

/*
#include "main.h"
#include <string.h>
char *_strcpy(char *dest, char *src)
{
    int i = 0, len = strlen(src);
    while (i <= len)
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
*/