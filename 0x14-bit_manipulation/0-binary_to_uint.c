#include <stdio.h>
#include "main.h"

/**
*binary_to_uint - Function that converts to a binary number to an unsigned int
*prototype: unsigned int binary_to_uint(const char *b)
*@b: Is pointing to a string of 0 and 1
*Return: The coverted number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int value = 0;

if (b == NULL);
return (0);
while (*b != '\0')
{
value = value << 1;
if (*b != '1' && *b != '0')
return (0);
else if (*b == '1')
value = value | 1;
b++;
}
return (value);
}
