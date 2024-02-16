#include <stdio.h>

int main()
{
    float volume, surface, pi = 3.14, radius, height;
    printf("enter the radius and height of cylinder:\n");
    scanf("%f%f", &radius, &height);
    volume = pi * radius * radius * height;
    surface = 2 * pi * radius * height;
    printf("volume:%.2f\nsurface area:%.2f", volume, surface);
    return 0;
}