#include "lists.h"

/**
* free_listint - frees a memory to avoid memory leak
* @head: listint_t list to be freed after used
*/
void free_listint(listint_t *head)
{
listint_t *snode;

while (head)
{
snode = head->next;
free(head);
head = snode;
}
}
