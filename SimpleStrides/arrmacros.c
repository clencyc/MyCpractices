#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
#define PRODUCT(X, Y) X * Y

int main()
{
    int arr[SIZE];
    int i;
    int a, b;


    for (i = 0; i <= SIZE; i++) {
        arr[i] = i * 2;

    }

    for (i = 0; i <= SIZE; i++) {
        printf("%d\n", arr[i]);

    }
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    
    scanf("%d", &b);
    printf("Prodect of %d and %d is %d: ", a, b, PRODUCT(a + 1, b));

    
}