#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free list
 * @head: head pointer
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *hold;

	if (!*head)
		return;

	while (*head)
	{
		hold = *head;
		*head = (*head)->next;
		free(hold);
	}
	*head =  NULL;

}
