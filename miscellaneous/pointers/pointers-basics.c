#include <stdio.h>


int main()
{
    printf("\nLEARNING THE BASICS OF POINTERS IN C\n\n");

    // This is a variable called number that holds the value 10.
    int number = 10;

    // This is a pointer variable that points to an integer.
    int *int_pointer;

    // Using the & operator, we can tell where in the memory number is located
    printf("Address of variable \'number\'.: %x\n", &number);

    // Now we tell the pointer int_pointer to hold the address of number
    int_pointer = &number;

    // And we'll see that int_pointer indeed holds the address we just printed
    printf("Value stored in \'int_pointer\': %x\n\n", int_pointer);

    // We know that number holds the value 10, so...
    printf("Value that variable \'number\' holds: %d\n", number);

    // If we use the dereference operator *, we can access that value
    // stored in number, through int_pointer, because int_pointer points to number
    printf("*int_pointer holds the same value.: %d\n\n", *int_pointer);

    // This is so for real, that if we change the value of *int_pointer
    // We will also change the value of the variable number!
    *int_pointer = 20;

    printf("Changed value of *int_pointer, printing \'number\': %d\n", number);

    // To sum up, pointers are like an address book.
    // An address book does not have you in it, but your home address
    // Having your home address, I can find you

    printf("\nThat\'s all folks!\n");
    return 0;
}
