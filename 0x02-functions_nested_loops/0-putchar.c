#include <unistd.h>
#include "main.h"

/**
*main - check description
*Description: It prints the word _putchar, followed by a newline.
*Return: 0.
*/

int main(void)
{

char word[8] = "_putchar";
int i;

for (i = 0; i < 9; i++)
_putchar(word[1]);
_putchar('\n');

return (0);
}
