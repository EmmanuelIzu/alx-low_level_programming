#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a list
 * @head: the head pointer
 *
 */


void free_listint(listint_t *head)
{
	if (head)
	{
		while (head)
		{
			head = head->next;
			free(head);
		}

	}
}
