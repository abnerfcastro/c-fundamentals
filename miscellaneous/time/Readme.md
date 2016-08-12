# Instructions

To build and compile, type these commands in the terminal:

```
$ make
$ .\time_c.exe
```

# Using `time.h`

## `clock_t` and `clock()`

The C library function `clock_t clock(void)` returns the number of clock ticks elapsed since the program was launched. To get the number of seconds used by the CPU, you'll need to divide by `CLOCKS_PER_SECOND`.

It can be used as a stopwatch to time your program's execution. In file `time.c`, there's a function called `time_your_program()` that makes use of `clock_t` and `clock()` to time how long a loop that counts `0` to `+2147483647` (`INT_MAX`) takes to run.

```C
clock_t start, end;
start = clock();
// some code runs here...
end = clock();
```