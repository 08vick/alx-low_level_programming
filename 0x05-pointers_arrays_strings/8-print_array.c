#include "main.h"
#include <stdio.h>
/**
*print_array - points n element of integers
*@a: A pointer to an int that will be updated or changed
*@n: Return value n
*Return: void
*/
void prints_array(int *a, int n)
{
int i;

i = 0;
while (i < n)
{
printf("%d", a[i]);

if (i < n - 1)
{
printf(", ");
}

i++;
}

printf("\n");
}
