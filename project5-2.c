#include <stdio.h>

int main(void) {
    int hours24, hours12, minutes;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours24, &minutes);

    hours12 = hours24 % 12;
    hours12 += hours12 == 0 ? 12 : 0;

    if (hours24 >= 12) {
        /* PM */
        printf("Equivalent 12-hour time: %.2d:%.2d PM\n", hours12, minutes);
    } else {
        /* AM */
        printf("Equivalent 12-hour time: %.2d:%.2d AM\n", hours12, minutes);
    }

    return 0;
}