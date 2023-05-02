#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free list
 * @head: head pointer
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *hold, *header;

	header = *head;

	if (!header)
		return;

	while (header)
	{
		hold = header;
		header = header->next;
		free(hold);
	}

}
