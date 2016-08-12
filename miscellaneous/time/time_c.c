/*
 * Author: Abner Castro
 * Date: August 11th, 2016
 * Description:
 *      Play around with time functions in C.
 */

#include <stdio.h>      // printf
#include <time.h>       // time_t, ctime
#include <limits.h>     // MAX_INT

static inline void days_since_beginning();
static inline void time_your_program();
static inline void when_time_t_wrap_around();

int main()
{
    days_since_beginning();
    time_your_program();
    when_time_t_wrap_around();
    return 0;
}

static inline void days_since_beginning()
{
    time_t seconds;
    seconds = time(NULL);
    printf("Days since January 1, 1970 = %d\n", seconds/3600/24);
}

static inline void time_your_program()
{
    clock_t start, end, elapsed;

    start = clock();
    // Loop just to stall a bit...
    for (int i = 0; i < INT_MAX; i++) {}
    end = clock();
    elapsed = end - start;
    printf("It took me %d clicks (%f seconds).\n", elapsed, ((float)elapsed)/CLOCKS_PER_SEC);

}

static inline void when_time_t_wrap_around()
{
    printf(":: When will time_t wrap around? \n\n");
    
    time_t biggest = 0x7FFFFFFF;
    printf("biggest = %s", ctime(&biggest));
    printf("biggest = %s", asctime(gmtime(&biggest)));
}
