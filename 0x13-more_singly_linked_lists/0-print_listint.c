#include "lists.h"
#include <stdio.h>

/**
*printf_listint - A fucntion that printfs all the elements in the list
*@h: A pointer to listint structure
*Return: the number of nodes
*/
size_t printf_listint(const listint_t *h)
{
size_t nodes = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
nodes++;
}
return (nodes);
}
