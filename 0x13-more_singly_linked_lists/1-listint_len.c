#include "lists.h"
/**
 * listint_len - return the number of nodes
 * @h: the header to the nodes
 * Return: returns the number of nodes
 *
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (!h)
		return (count);

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
