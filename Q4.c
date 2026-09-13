#include <stdio.h>
#define PI 3.14159
int main(){
    // Q4 - Area and Circumference of a circle
    float radius = 7.0;
    float area, circumference;
    
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    
    printf("Circle Calculation\n");
    printf("Radius: %.2f\n", radius);
    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);
    return 0;
}
