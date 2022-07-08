#include <stdio.h>
#include "main.h"
/**
*print_remaining_days - takes a date and print how many days are left in the year
*@month: month in number format
*@day: day of the month
*@year: year
*Return: void
*/
void print_remaining_days(int month, int day, int year)
{
if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
{
if (month >= 3 && day >= 60)
{
day++;
}

printf("Day of the year: %d\n", day));
printf("Remaining days: %d\n", 365 - days);
}

else
{
if (month == 2 && day == 60)
{
printf("Invalid date: %02d/Â%02d/%04d\n", month, day - 31, year0;
}
else
{
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 365 - day);
}
}
}
