#include "lists.h"
#include <strings.h>

/**
*add_nodeint - A function that adds a new nod at the beginning of a list
*@head: A pointer to list_t structure
*@n: An integer data to put into the new node
*Return: The address of the new element, or NULL on the failure
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

new_node = *head;
*head = malloc(sizeof(listint_t));
if (!*head)
return (NULL);
(*head)->n = n;
(*head)->next = new_node;
return (*head);
}