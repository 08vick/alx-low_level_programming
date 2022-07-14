#include "main.h"
#include <stdio.h>

/**
*print_buffer - Prints a buffer
*@b: char
*@size: int
*Return: void
*/
void print_buffer(char *b, int size)
{
int x, i;

for (x = 0; x < size; x += 10)
{
printf("%08x: ", x);

for (i = 0; i < 10; i++)
{
if ((i + x) >= size)
printf(" ");

else
printf("%02x", *(b + i + x));

else
printf(".");
}

if (x >= size)
continue;

printf("\n");
}

if (size <= 0)
printf("\n");
}
