#include "lists.h"
/**
 * list_len - function that returns the number of elements
 * @h: the list header
 * Return: returns the number of elements.
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
	count++;
	}
return (count);
}

