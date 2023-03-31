#include <stdio.h>

// int main() {
    // int n = 6;
    // int i;
    // int largest = 0;
    //  int count = 0;
    // int j;
    // for ( i = 1; i <= n ; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         count = 0;
    //        for ( j = 1; j <= i; i++)
    //        {
    //         if (i % j == 0)
    //         {
    //             count++;
    //             if (count == 2)
    //             {
    //                 // largest = i;
    //                 printf("%d", i);
    //             }
    //         }
    //        }
           
    //      }
                
    //         }
    //     }
    // int main (void)
    // {
    //     int num = 500;
    //     int i=1,j,k;
    //     while (i <=num)
    //     {
    //         k=0;
    //         if(num % i == 0)
    //         {
    //             j=1;
    //             while (j<=i)
    //             {
    //                 if (i % j==0)
    //                 {
    //                     k++;
    //                     j++;
    //                 }
    //             }
    //             if (k == 2)
    //             printf("\n%d is a prime factor",i);
    //         }
    //         i++;
    //     }
    //     return (0);
    // }
#include <stdio.h>

int main() {
   long long num = 612852475143;
   long long largestPrimeFactor = 0;
   
   // loop through all possible factors
   for (long long i = 2; i <= num; i++) {
      // check if i is a factor of num
      while (num % i == 0) {
         // check if i is a prime number
         int isPrime = 1;
         for (long long j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
               isPrime = 0;
               break;
            }
         }
         if (isPrime && i > largestPrimeFactor) {
            largestPrimeFactor = i;
         }
         
         // divide num by i to remove factor
         num /= i;
      }
   }
   
   printf("The largest prime factor of 612852475143 is: %lld\n", largestPrimeFactor);
   
   return 0;
}

/*
prime factor are numbers that can divide a particular number without remainder and are also prime numbers (which means can only be divide by one and itself or and only two factors 1 and itself e.g  prime factor of 10 : factors of  1, 2 , 5 but only 2 and 5 are prime numbers,primefactor of 12 : 1, 2 , 3, 4 but only 2 and 3 are prime numbers cause 2 can only be divide by 1 and itself,same with 3  )
*/