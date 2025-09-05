#include <stdio.h>

int main(void) {
    int n;
    int digits = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n >= 10) {
        n /= 10;
        digits++;
    }

    printf("The number has %d digit(s).\n", digits);
    
    return 0;
}