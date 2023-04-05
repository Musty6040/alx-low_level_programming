#include "lists.h"

/**
* pop_listint - to deletes the head of a node in a linked list
* @head: pointer that points the first member in the linked list
*
* Return: the item inside the node that was deleted,
* or 0 if the list is null
*/
int pop_listint(listint_t **head)
{
listint_t *snode = *head;
int item;
if (head == NULL)
{
item = 0;
}
else
{
if (*head != NULL)
{
*head = snode->next;
item = snode->n;
free(snode);
*head = snode;
}
}
return (item);
}

