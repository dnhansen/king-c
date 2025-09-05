#include <stdio.h>
#define PI 3.1415926f

int main(void) {
    float radius = 10.0f;
    float volume = 4.0f/3.0f * PI * radius * radius * radius;

    printf("%f\n", volume);

    return 0;
}