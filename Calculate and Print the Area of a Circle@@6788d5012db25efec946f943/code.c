#include <stdio.h>
int main ()
{
    float radius, area;
    printf("Radius of ciecle is: ");
    scanf("%f", &radius);
    area= 3.14 * radius *radius;
    printf("Area: %f", &area);
    return 0;
}