#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c) {
    if (size == 0) {
        return NULL;
    }

    char *array = (char *)malloc(size * sizeof(char));

    if (array == NULL) {
        return NULL;
    }

    for (unsigned int i = 0; i < size; i++) {
        array[i] = c;
    }

    return array;
}

int main() {
    unsigned int size;
    char c;

    printf("Enter the size of the array: ");
    scanf("%u", &size);

    printf("Enter the character to initialize the array with: ");
    scanf(" %c", &c);

    char *array = create_array(size, c);

    if (array == NULL) {
        printf("Failed to create the array.\n");
    } else {
        printf("Array created successfully.\n");
        printf("Array contents: ");
        for (unsigned int i = 0; i < size; i++) {
            printf("%c ", array[i]);
        }
        printf("\n");

        free(array); // Free the allocated memory
    }

    return 0;
}
