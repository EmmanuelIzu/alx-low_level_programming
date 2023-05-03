#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - replace at index
 * @head: the head pointer
 * @idx: the index
 * @n: data
 * Return: return pointer or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;

	listint_t *new;
	listint_t *hold = *head;

	new = malloc(sizeof(listint_t));

	if (!new || !*head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}


	for(count = 0; hold && count < idx; count++)
	{
		if (count == (idx - 1))
		{
			new->next = hold->next;
			hold->next = new;
			return (new);
		}
		else
			hold = hold->next;
	}

return (NULL);
}
