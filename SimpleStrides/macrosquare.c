#include <stdio.h>

#define square(x) ((x) * (x))

int main()
{
    int s;
    printf("Enter a number: ");
    scanf("%d", &s);

    printf("The square of %d is: %d\n", s, square(s));
    return (0);

}