/*
 * Author: Abner Castro
 * Date: July 15th, 2016
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct _date
{
    int month;
    int day;
    int year;
} Date;

Date create_date_std(int month, int day, int year);
Date* create_date_ptr(int month, int day, int year);
void change_date(Date *date, int month, int day, int year);
void print_date(Date d);

int main()
{
    Date d = create_date_std(7, 15, 2016);
    print_date(d);

    Date *d_ptr = create_date_ptr(8, 20, 2016);
    print_date(*d_ptr);

    change_date(d_ptr, 1, 25, 2017);
    print_date(*d_ptr);

    return 0;
}

Date create_date_std(int month, int day, int year)
{
    Date d;
    d.month = month;
    d.day = day;
    d.year = year;

    return d;
}

Date* create_date_ptr(int month, int day, int year)
{
    Date *d = malloc(sizeof(Date));
    d->month = month;
    d->day = day;
    d->year = year;

    return d;
}

void change_date(Date *date, int month, int day, int year)
{
    (*date).month = month;
    (*date).day = day;
    (*date).year = year;
}

void print_date(Date d)
{
    printf("%d/%d/%d\n", d.month, d.day, d.year);
}
