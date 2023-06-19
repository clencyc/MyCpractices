#include <stdio.h>

#define pi 3.143

int main()
{
    int r;
    

    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    double area = pi * r * r;

    printf("The area is %lf", area);
    return (0);
}