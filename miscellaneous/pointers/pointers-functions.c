#include <stdio.h>      // printf
#include <stdlib.h>     // qsort

#define SIZE 5

int compare(const void*, const void*);

int main()
{
    int values[SIZE] = {90, 40, 50, 80, 10};

    for (size_t i = 0; i < SIZE; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");

    // Call qsort
    qsort(values, SIZE, sizeof(int), compare);

    for (size_t i = 0; i < SIZE; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");

    return 0;
}

int compare(const void *first, const void *second)
{
    int a = *(int*)first;
    int b = *(int*)second;
    return a - b;
}
