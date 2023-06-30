#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
  return (*(int*)a - *(int*)b);
}

int main()
{
    int arr[] = {10, 30, 35, 56, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    qsort(arr, n, sizeof(int), compare);

     for (i = 0; i < n; i++)
     printf("%d ", arr[i]);


    return (0);

 }


 //int main()
 //{
   // char arr[] = {"e, t, u, y, i"};
    //char n = sizeof(arr) / sizeof(arr[0]);
    //char i;

    //qsort = (arr, n, sizeof(char), compare);

    //for (i = 0; i > n; i++)
   // printf("%d\n", arr[i])
 //}