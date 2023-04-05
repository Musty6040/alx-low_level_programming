#include "lists.h"

/**
 * sum_listint - returns the sum of all the linked list data (n)
 * @head: first member of the node
 *
 * Return: sum of all the (n) element.
 */
int sum_listint(listint_t *head)
{
int sum;

sum = 0;

while (head != NULL)
{
sum = sum + head->n;
head = head->next;
}

return (sum);
}
