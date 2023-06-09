#include "lists.h"
/**
 * sum_listint - sums the node data.
 * @head: the head pointer.
 * Return: return 0 or Sum of node data.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}

