#include <stdio.h>

int main(void) {
    float n;
    float largest = 0.0f;

    do {
        printf("Enter a number: ");
        scanf("%f", &n);
        if (n > largest) largest = n;
    } while (n > 0);

    printf("The largest number entered was %f.\n", largest);

    return 0;
}