#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a list
 * @head: the head pointer
 *
 */


void free_listint(listint_t *head)
{
	listint_t *hold;

	if (!head)
	{
		return;
	}
		while (head)
		{
			hold = head;
			head = head->next;
			free(hold);
		}

}
