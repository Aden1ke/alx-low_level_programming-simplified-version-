#include <stdio.h>
#include "main.h"
int main(void)
{
  int i, t1 = 1, t2 = 2, nextTerm;
    for (i = 1; i <= 50; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}