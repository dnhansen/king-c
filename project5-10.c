#include <stdio.h>

int main(void) {
    int n, tensDigit;

    printf("Enter numerical grade: ");
    scanf("%d", &n);

    if (n < 0 || n > 100) {
        printf("Grade must be between 0 and 100 inclusive.\n");
        return 1;
    }

    if (n == 100) {
        printf("A\n");
        return 0;
    }

    tensDigit = n / 10;
    switch (tensDigit) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("F\n");
            break;
        case 6:
            printf("D\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 9:
            printf("A\n");
            break;
    }
    
    return 0;
}