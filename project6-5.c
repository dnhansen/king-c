#include <stdio.h>

int main(void) {
    int n, r;

    printf("Enter an integer: ");
    scanf("%d", &n);

    do {
        r = n % 10;
        n = n / 10;
        printf("%d", r);
    } while (n != 0);
    printf("\n");

    return 0;
}