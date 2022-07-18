#include "main.h"

/**
*_memset - fills memory with a constant byte
*@s: memory
*@b: constant byte
*@n: bytes of the memory area
*Return: pointers to the memory areas
*/
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

while (n--)
*s++ = b;
return (ptr);
}
