#include <stdio.h>
int main (void)
{ 
    long long largest = 0;
    long long i = 1;
    long long num = i;
    for ( i = 1; i <= 612852475143; i++)
    {
     if (i % 2 == 0)
        {
     largest = i;
     if (i >= largest)
     {
        printf("%ld", i);
     }
        }   
    }
    
        
    
}