#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Input three different integers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Sum is %d\n", a + b + c);
    printf("Average is %d\n", (a + b + c)/3);
    printf("Product is %d\n", a * b * c);

    // Find out which is the smallest
    int smallest = a;
    if (b < smallest)
        smallest = b;
    if (c < smallest)
        smallest = c;

    printf("Smallest is %d\n", smallest);

    // Find out which is the largest
    int largest = a;
    if (b > largest)
        largest = b;
    if (c > largest)
        largest = c;

    printf("Largest is %d\n", largest);

    return 0;
}
