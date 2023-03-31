#include <stdio.h>
int main(void) {
    char n;
    for (n = 'a'; n <= 'z'; n++)/*in a for loop we intialize,condiction and increment it*/
    {
      putchar(n);
    }
    putchar('\n');
    return (0);    
}
/*OR
#include <stdio.h>
int main(void) {
    char n = 'a';
    while (n <= 'z')
    {
      putchar(n);
      n++;
    }
    putchar('\n');
    return (0);    
}
*/
