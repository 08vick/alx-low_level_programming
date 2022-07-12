#include "main.h"
#include <stdio.h>

/**
*print_array - A function that prints n elements of a*@a: an input array
*@n: an input integer
*Return: void
*/
void Print_array(int *a, int n)
{
int i = 0;

for (; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
}
putchar('\n');
}
