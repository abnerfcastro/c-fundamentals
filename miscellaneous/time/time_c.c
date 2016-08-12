/*
 * Author: Abner Castro
 * Date: August 11th, 2016
 * Description:
 *      Play around with time functions in C.
 */

#include <stdio.h>      // printf
#include <time.h>       // time_t, ctime

static inline void when_time_t_wrap_around();

int main()
{
    when_time_t_wrap_around();
    return 0;
}

static inline void when_time_t_wrap_around()
{
    printf(":: When will time_t wrap around? \n\n");
    
    time_t biggest = 0x7FFFFFFF;
    printf("biggest = %s", ctime(&biggest));
    printf("biggest = %s", asctime(gmtime(&biggest)));
}
