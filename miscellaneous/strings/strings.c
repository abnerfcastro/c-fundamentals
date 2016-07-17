/*
 * Author: Abner Castro
 * Date: July 16th, 2016
 * Description:
 *      Playing around with strings in C.
 */

#include <stdio.h>
#include <stdlib.h>     // malloc, free

int length(const char*);
char* concatenate(const char*, const char*);
char* substring(const char*, int, size_t);

int main()
{
    char name[] = {'J','o','h','n', '\0'};
    char color[] = "blue";
    char *home_address = "P. Sherman 42 Wallaby Way, Sydney";

    printf("This is %s. He likes the color %s. He lives in %s.\n",
                name, color, home_address);

    printf("%s is a %d letters name.\n", name, length(name));

    char *str = concatenate("This is ", "a concatenated string.");
    printf("%s\n", str); // Should print 'This is a concatenated string.'

    str = substring("John Doe", 5, 3);
    printf("%s\n", str); // Should print 'Doe'

    free(str);
    return 0;
}

int length(const char* string)
{
    const char *start = string;

    // Iterates through string until '\0'
    while (*string)
        string++;

    return (string - start);

    // Another way to implement this function is
    // size_t size = 0;
    // while (string[size] != '\0')
    //     size++;
    // return size;
}

char* concatenate(const char *first, const char *second)
{
    size_t size_first = length(first);
    size_t size_second = length(second);
    size_t size =  size_first + size_second + 1;

    // Allocates memory for the concatenated string
    char *new_string = malloc(size * sizeof(char));

    for (size_t i = 0; i < size_first; i++) {
        new_string[i] = first[i];
    }

    for (size_t i = 0; i < size_second; i++) {
        new_string[i + size_first] = second[i];
    }

    // Adds the '\0' to the last position
    new_string[size - 1] = '\0';

    return new_string;
}

char* substring(const char *source, int index, size_t size)
{
    // In case index is out of bounds, return null
    if (index >= length(source))
        return NULL;

    // If index + size exceeds the length of source, size gets shortened
    if ((index + size) > length(source))
        size = length(source) - index;

    char *substr = malloc((size + 1) * sizeof(char));

    for (size_t i = 0; i < size; i++)
    {
        substr[i] = source[index + i];
    }

    substr[size] = '\0';
    return substr;
}
