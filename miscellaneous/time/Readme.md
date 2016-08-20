# Instructions

To build and compile, type these commands in the terminal:

```
$ make
$ .\time_c.exe
```

## Using `time.h`

### `time_t`, `struct tm` and `time()`

Function `time()` is defined as follows:

```C
time_t time(time_t *timer);
```

It gets the current calendar time as a value of type `time_t`. If the argument is not a *null pointer*, it also sets this value to the object pointed by `timer`. So the object pointed by `timer` is modified. The value returned generally represents the number of seconds since 00:00 hours, Jan 1, 1970 UTC. Thus, the function may be called in both ways:

```C
time_t time_value;
time(&time_value);
// or like this...
time_value = time(NULL);
```

### `clock_t` and `clock()`

The C library function `clock_t clock(void)` returns the number of clock ticks elapsed since the program was launched. To get the number of seconds used by the CPU, you'll need to divide by `CLOCKS_PER_SECOND`.

It can be used as a stopwatch to time your program's execution. In file `time.c`, there's a function called `time_your_program()` that makes use of `clock_t` and `clock()` to time how long a loop that counts `0` to `+2147483647` takes to run.

```C
clock_t start, end;
start = clock();
// some code runs here...
end = clock();
```