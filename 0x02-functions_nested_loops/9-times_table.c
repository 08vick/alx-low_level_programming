#include "main.h"
/**
*times_table - print tables
*
*Return: Always (0) success
*/
void times_table(void)
{
int a;
int b;
int c;

for (a = 0; a <= 9; a++)
{
c = a * b;
if ((c / 10) == 0)
{
if (b == 0)
{
_putchar ('0');
}
if (b != 0)
{
_putchar ('');
_putchar ((c % 10) + '0');
}
if (b < 9)
{
_putchar(',');
_putchar(' ');
}
else
{_putchar ((c / 10) + '0');
_putchar ((c % 10) + '0');
if (b < 9)
{
_putchar (',');
_putchar (' ');
}
}
}
_putchar ('\n');
}
}
