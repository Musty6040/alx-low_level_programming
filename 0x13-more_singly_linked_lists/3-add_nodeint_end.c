#include "lists.h"

/**
 * add_nodeint_end - adding a node at the end of a linked list
 * @head: pointer to the first part of the node
 * @n: data to input in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *snode;
listint_t *temp = *head;
snode = malloc(sizeof(listint_t));
if (snode == NULL)
return (NULL);
snode->n = n;
snode->next = NULL;
temp = *head;

if (*head == NULL)
{
*head = snode;
}
else
{
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = snode;
}
return (snode);
}

