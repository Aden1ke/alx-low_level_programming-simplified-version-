#include "main.h"
#include <stdio.h>
int _atoi(char *s)
{
    int nom = 0;
    int i;
    int sign = 1;

    if (s[0] == '-')
    {
        sign = -1;
        i = 1;
    } 
    else
    {
        i = 0;
    }
    for (; s[i] != '\0'; i++)
    {
        nom = nom * 10 + s[i] - '0';
    }

    nom *= sign;
    return nom;
}

/*NOTE:
We use a for loop to iterate over the characters of the string s until it reaches the null character '\0' at the end of the string. For each character, we convert the digit character represented by str[i] to its corresponding integer value by subtracting the ASCII value of '0'.
Then, we multiply the current value of num by 10 and add the converted integer to it. The resulting value is stored back in num(for more understanding: Let's use the same example string "1234" and assume that we are converting it character by character using the for loop:
When i is 0, we access the first character of the string str[0], which is '1'. We convert it to an integer value by subtracting the ASCII value of '0', which gives us 1. We then multiply the current value of num, which is 0, by 10 and add the converted integer to it: num = 0 * 10 + 1 = 1.

When i is 1, we access the second character of the string str[1], which is '2'. We convert it to an integer value by subtracting the ASCII value of '0', which gives us 2. We then multiply the current value of num, which is 1, by 10 and add the converted integer to it: num = 1 * 10 + 2 = 12.

When i is 2, we access the third character of the string str[2], which is '3'. We convert it to an integer value by subtracting the ASCII value of '0', which gives us 3. We then multiply the current value of num, which is 12, by 10 and add the converted integer to it: num = 12 * 10 + 3 = 123.

When i is 3, we access the fourth and final character of the string str[3], which is '4'. We convert it to an integer value by subtracting the ASCII value of '0', which gives us 4. We then multiply the current value of num, which is 123, by 10 and add the converted integer to it: num = 123 * 10 + 4 = 1234.

At this point, the loop exits and the final value of num is 1234, which represents the integer value of the original string "1234".
). The loop repeats for each digit character in the string, effectively building up the integer value digit by digit.
nom *= sign(is used insure that the sign of nom is retained.)
After the loop has finished, the final value of num is the converted integer*/

/*
To convert a string to an integer in C, you can use the atoi() or strtol() function.endptr( specifies the base of the number system to be used for the conversion (in this case, base 10)
READ MORE ON IT
*/