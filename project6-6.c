#include <stdio.h>

int main(void) {
    int n, i = 2, square;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while ((square = i*i) <= n) {
        printf("%d\n", square);
        i += 2;
    }

    return 0;
}