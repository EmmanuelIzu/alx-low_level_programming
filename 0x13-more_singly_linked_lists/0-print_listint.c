#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints the content of nodes
 * and the number of nodes
 * @h: The head pointer
 * Return: returns the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{

	int count = 0;

	if (!h)
		return(1);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}


return (count);
}
