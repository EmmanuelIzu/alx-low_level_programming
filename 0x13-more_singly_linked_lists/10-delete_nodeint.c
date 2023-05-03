#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = NULL;
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
		if (hold->next)
			return (-returnv);
		if (!hold)
			return (-returnv);
		hold = hold->next;
		i++;
	}


	current = hold->next;
	hold->next = current->next;
	free(current);

	return (returnv);
}

