#include "lists.h"

/**
* pop_listint - to deletes the head of a node in a linked list
* @head: pointer that points the first member in the linked list
* Return: the item inside the node that was deleted,
* or 0 if the list is null
*/
int pop_listint(listint_t **head)
{
listint_t *snode;
int item;

if (!head || !*head)
return (0);

item = (*head)->n;
snode = (*head)->next;
free(*head);
*head = snode;

return (item);
}

