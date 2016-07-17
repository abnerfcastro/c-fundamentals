# Instructions

To build and compile, type these commands in the terminal:

```
$ make
$ .\strings.exe
```

# Strings

A string is a series of characters treated as a single unit. A string may include letters, digits and various special characters such as +, -, \* and $. In C, they are written in double quotations, like

```
"John Doe"
"New York, NY"
"+55 19 99123-3345"
```

A string in C is an array of characters ending in the null character represented by `'\0'`. A string is accessed via pointer to the first character of the string. That being said, the value of a string is the address of its first character.

Thus, you can say that, in C, a **string is a pointer**. In that sense, strings are like arrays, because an array is also a pointer to its first element.

A string can be initialized in the following ways:

```C
char name[] = {'A','d','a','m','\0'};
char color[] = "blue";
const char *color_ptr = "blue";
```
