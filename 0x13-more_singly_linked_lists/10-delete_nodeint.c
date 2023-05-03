#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node
 * @head: head pointer
 * @index: index of node
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *trans = NULL;
	listint_t *hold = *head;
	unsigned int i = 0;
	int returnv = 1;

	if (*head == NULL)
		return (-returnv);

	if (index == 0)
	{
		*head = (*head)->next;
		free(hold);
		return (returnv);
	}

	while (i < index - 1)
	{
		if (!hold->next)
			return (-returnv);
		if (!hold)
			return (-returnv);
		hold = hold->next;
		i++;
	}


	trans = hold->next;
	hold->next = trans->next;
	free(trans);

	return (returnv);
}

