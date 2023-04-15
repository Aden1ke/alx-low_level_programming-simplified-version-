
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


/**
 * int len = 0; - This line declares and initializes an integer variable len to 0, 
 * which will be used to store the length of the string. 
 * This variable will be used to keep track of the number of characters in the input string.
 * 
 * while (s[len] != '\0') - This line starts a while loop that continues as long as the current character at the position len in the string s is not equal to the null terminator ('\0'), 
 * which marks the end of the string. 
 * The loop condition s[len] != '\0' checks if the character at the current position is not equal to '\0'.
 * 
 * len++ ; - This line increments the value of len by 1 for each iteration of the loop. 
 * It effectively counts the number of characters in the string by moving to the next position in the string for each iteration of the loop.
 * 
 * return (len); - This line returns the final value of len, which represents the length of the string, 
 * as the output of the function.
 *  Once the loop completes and reaches the end of the string (i.e., encounters the null terminator), 
 * the final value of len will be the total number of characters in the string.
*/