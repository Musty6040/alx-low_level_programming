#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a link list
 * @head: first node of a link list
 * @index: index of the node.
 *
 * Return: nth node. If node does not have  any element , returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int h = 0;

while (h < index && head != NULL)
{
head = head->next;
h++;
}
{
return (head);
}
}
