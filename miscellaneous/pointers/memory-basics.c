#include <stdio.h>
#include <stdlib.h>

int main()
{
    // We first create a pointer and allocate memory for it
    int *int_pointer = malloc(sizeof(int));

    // And if we print *int_pointer, it holds garbage!
    printf("Garbage value in *int_pointer: %d\n", *int_pointer);

    // Let's assign a meaningful value to *int_pointer
    *int_pointer = 50;
    printf("After assigning 50 to *int_pointer, this is its value: %d\n\n", *int_pointer);

    // Let's free the pointer int_pointer
    free(int_pointer);

    // Now let's create an array of integers like this
    int *int_array = malloc(3 * sizeof(int));
    int_array[0] = 10;
    int_array[1] = 20;
    int_array[2] = 30;

    // And we can iterate through the array
    for (size_t i = 0; i < 3; i++) {
        printf("int_array[%d] = %d\n", i, int_array[i]);
    }

    // Here is another way of printing the array
    printf("\nAnother way of printing the array: \n");
    printf("*int_array = %d\n", *int_array);
    printf("*(int_array + 1) = %d\n", *(int_array + 1));
    printf("*(int_array + 2) = %d\n", *(int_array + 2));

    // Instead of using malloc to allocate arrays, we can use calloc
    // It allocates an array and sets all the values to 0
    int_array = calloc(5, sizeof(int));
    int_array[0] = 100;
    int_array[1] = 200;

    // And we can iterate through the array again
    // Notice that we can go out of bounds, but we'll only find garbage
    for (size_t i = 0; i < 10; i++) {
        printf("int_array[%d] = %d\n", i, int_array[i]);
    }

    int_array = realloc(int_array, 5 * sizeof(int));
    int_array[4] = 500;
    for (size_t i = 0; i < 5; i++) {
        printf("int_array[%d] = %d\n", i, int_array[i]);
    }

    printf("Size of int_array: %d\n", sizeof(int_array));

    int* pointer;
    pointer[0] = 1;
    printf("%d\n", pointer[0]);

    free(int_array);

    return 0;
}
