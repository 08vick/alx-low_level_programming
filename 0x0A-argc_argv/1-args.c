#include "main.h"
#include <stdio.h>

/**
*main - A problem that prints the number of arguments you passed into it
*@argc: An argument counter
*@argv: An argument values
*Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
if (argv[0])
printf("%d\n", argc - 1);
return (0);
}
