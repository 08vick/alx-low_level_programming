[6~[A#include "lists.h"

/**
*print_list - prints all the elements of a list_t list
*@h: pointer
*Return: number of nodes int the list
*/
size_t[6~[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[[B[B[A[A[D[D[D[D[D[D[D[Dstudents[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[D[D[D[D[D[D[D[D[D print_List(const list_t *h)
{
size_t len = 0;
int i;
const list_t *c = h;

for (i = 0; c; i++)
{
if (c->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", c->len, c->str);
c = c->next;
len++;
}
return (len);
}
