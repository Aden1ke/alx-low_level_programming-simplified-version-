#include <stdio.h>
int main() {
    int i, n = 50, t1 = 0, t2 = 1, nextTerm;
    
    for (i = 1; i <= n; ++i) {
        if (t1 % 2 == 0) { 
    /*check if t1 is even*/ 
            printf("%d, ", t1);
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}