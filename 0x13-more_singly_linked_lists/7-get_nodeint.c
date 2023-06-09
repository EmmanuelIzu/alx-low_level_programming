#include "lists.h"
/**
 * get_nodeint_at_index - get the node at the index
 * @head: the head pointer
 * @index: the nth index
 * Return: returns NULL or head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	while ((count < index) && (head != NULL))
	{
		head = head->next;
		count++;
	}
	return (head);
}
