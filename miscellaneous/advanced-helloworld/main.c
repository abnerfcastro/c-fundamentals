/*
 * Author: Abner Castro
 * Date: July 16th, 2016
 * Description:
 *      A multilingual hello world program using function pointers
 */

#include <stdio.h>

// The main helloworld function
void helloworld(const char*, void (*)(const char*));

void english(const char*);
void portuguese(const char*);
void dutch(const char*);

int main()
{
    helloworld("Abner", english);
    helloworld("Abner", portuguese);
    helloworld("Abner", dutch);
    return 0;
}

void helloworld(const char *name, void (*language)(const char*))
{
    language(name);
}

void english(const char *name)
{
    printf("Hello World! Welcome, %s\n", name);
}

void portuguese(const char *name)
{
    printf("Ola mundo! Bem-vindo, %s\n", name);
}

void dutch(const char *name)
{
    printf("Hallo Wereld! Welkom, %s\n", name);
}
