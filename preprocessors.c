#include <stdio.h>

#define PI 3.141592653589793

#define circleArea(r) (PI * r * r)

int main(){

    double radius = 12.4;

    double area = circleArea(radius);

    printf("%.2lf", area);

    return 0;
}