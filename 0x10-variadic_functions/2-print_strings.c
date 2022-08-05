#include "variadic_functions.h"
#include <stdarg.h>
#include<stdio.h>
/**
*print_strings - print strings
*@separator:char
*@n:unsigned int
*Return:void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
char *str;

va_start(list...)
for (i = 0; i < n; i++)
{
str = va_arg(list, cha...)
if (str)
printf("%s", ...)
else
printf("(ni...)
if (i < n - 1 && separator)
printf("%s", separa...)
}
va_end(l...)
printf("...)
}
