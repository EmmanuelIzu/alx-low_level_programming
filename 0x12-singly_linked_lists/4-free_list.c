#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees the list
 * @head: the header
 *
 */
void free_list(list_t *head)
{
	list_t *release;

	if (head == NULL)
		return;

	while (head != NULL)
	{
	release = head->next;
	free(head->str);
	free(head);
	head = release;
	}
}
