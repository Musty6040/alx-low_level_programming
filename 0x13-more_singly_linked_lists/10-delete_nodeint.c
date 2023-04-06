#include "lists.h"
/**
 * delete_nodeint_at_index - Function that deletes
 * a node at a specific index of the list..
 * @head: poiner to a list.
 * @index: node index to be deleted.
 * Return: 1 if it when well,and  -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int cnt = 0;
	listint_t *snode, *tmp;

	if (head == NULL)
	{
		return (-1);
	}
	if (*head != NULL)
	{
		snode = *head;
		if (index == 0)
		{
			*head = snode->next;
			free(snode);
			return (1);
		}
		while (snode)
		{
			if (cnt == index - 1)
			{
				if (snode->next != NULL)
				{
					tmp = snode->next;
					snode->next = tmp->next;
					free(tmp);
					return (1);
				}
			}
			cnt++;
			snode = snode->next;
		}
	}
	return (-1);
}
