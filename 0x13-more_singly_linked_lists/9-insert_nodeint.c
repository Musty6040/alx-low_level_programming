#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a specified position
* @head: harbours the first address of the node
* @idx: index represent the list location
* @n: integer element.
* Return: the address of the new node, or NULL if it unsuccessful
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);

	current->n = n;

	if (idx == 0)
	{
		current->next = *head;
		*head = current;
	}
	else
	{
		current->next = h->next;
		h->next = current;
	}

	return (current);
}

