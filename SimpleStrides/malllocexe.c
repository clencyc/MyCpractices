#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int n;
    char *ar;

    n = 5;
    ar = malloc(n * sizeof(char));
    ar[0] = 'C';
    ar[1] = 'o';
    ar[2] = 'o';
    ar[3] = 'l';
    printf("%s\n", ar);

    return (0);
}