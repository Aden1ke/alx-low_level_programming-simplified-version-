#include <stdio.h>

int main() {
    char letter[] = "_putchar";
    int i;

    for (i = 0; letter[i] != '\0'; i++) {
        putchar(letter[i]);
    }
    return 0;
}