#include "main.h"
#include <string.h>
void rev_string(char *s)
{
    int len = strlen(s) - 1;
    int i =0;
    int tmp;
    while (i <= len/2)
    {
        tmp = s[i];
         s[i] = s[len - i] ;
         s[len - i] = tmp;
         i++;
    }
    
}
/*OR*/
/*
#include "main.h"
#include <string.h>
void rev_string(char *s)
{
    int len = strlen(s);
    int i;
    int tmp;
    for ( i = 0; i <= len/2; i++)
    {
        tmp = s[i];
         s[i] = s[len - i - 1] ;
         s[len - i -1] = tmp;
    }
    
}*/
/*NOTE:
Reversing a string means changing the order of the characters in the string, so that the last character becomes the first, the second-to-last character becomes the second, and so on. For example, the string char reverse[5] ="hello"; would be reversed to become "olleh" which means the string reverse[0] is swapping with reverse[4],reverse[1] is swapping with reverse[3],until the middle string is reached.
in the example above :
a) look for the length of a string using strlen(s),write a for/while loop to read the strings,notice in the condition above the length is divided by 2 to signify that we want the for/while loop to only read half of the string,
b) Next we swap each string(using their numbers),next we store the value of the character at the current index, s[i], is stored in a temporary variable tmp.
The value of the character at the opposite end of the string, s[len - i - 1](e.g (note that Since we are swapping characters from the beginning and the end of the string, we need to access the character at the opposite end of the string, which is len - i - 1 where len(length of the string),i(to access each index number in the loop),1(is to remove the null character ('\0') which is always at the end of a string).
For example, in the first iteration of the loop, i is 0, so len - i - 1 is len - 1 - 0. This corresponds to the last character in the string. In the second iteration, i is 1, so len - i - 1 is len - 2, which corresponds to the second-last character in the string, and so on.
By accessing the character at len - i - 1, we can swap the character at the beginning of the string with the character at the end of the string, and continue doing so until we have swapped all the characters in the string. ) is then copied to the current index position s[i].
Finally, the value of tmp, which holds the original character value of s[i], is copied to the opposite end of the string at index s[len - i - 1].
By performing these three steps, the character values at s[i] and s[len - i - 1] are effectively swapped.

For example, if the string is "hello", and the current index i is 1 (which corresponds to the second character, 'e'), then tmp will hold the value 'e'. The value of s[len - i - 1], which is s[3] in this case, will hold the value of the last character in the string, 'o'. The second line of code then assigns the value of 'o' to s[i], which is the second character, and the third line of code assigns the value of tmp, which is 'e', to s[3], which is the last character. The resulting string after this swap will be "holl e".

By repeating this process for all pairs of elements in the string up to the middle index (i.e., len/2), the entire string is reversed. */