#include "main.h"
#include <stdio.h>

/**
*_strpbrk - a function that searches a string for any set of bytes
*@s: an input string
*@accept: an input character with to locate into strings
*Return: a pointer to the byte in s that matches one of the bytes in accept
*/
char *_strpbrk(char *s, char *accept)
{
char *start = accept;

while(*s)
{
while(*accept)
{
if (*accept == *s)
return (s);
accept++;
}

accept = start;
s++;
}
return (NULL);
}
