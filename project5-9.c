#include <stdio.h>

int main(void) {
    int year1, year2, month1, month2, day1, day2;
    int earliestDay;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    if (year1 < year2) {
        earliestDay = 1;
    } else if (year1 > year2) {
        earliestDay = 2;
    } else if (month1 < month2) {
        earliestDay = 1;
    } else if (month1 > month2) {
        earliestDay = 2;
    } else if (day1 < day2) {
        earliestDay = 1;
    } else {
        earliestDay = 2; /* Or they are the same */
    }

    if (earliestDay == 1) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", month1, day1, year1, month2, day2, year2);
    } else {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", month2, day2, year2, month1, day1, year1);
    }

    return 0;
}