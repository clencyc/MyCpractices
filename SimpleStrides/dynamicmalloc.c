#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;

    printf("Enter number of integers you want:");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n*sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not available.");
        exit(1);

    }

    for (i=0; i<n; i++)
    {
        printf("Enter an integer:");
        scanf("%d", ptr + i);//these are bytes + address of previous bytes
    }

    for (i=0; i<n; i++)
    {
         /*cool thing with pointers is u can use them to manipulate the data stored in the address they are pointing to */
    printf("%d \n", *(ptr+i));//dereferencing it to get valuse on the screen

    }

    free(ptr); // Free the allocated memory in order to avoid memory leaks
   
    return 0;

}