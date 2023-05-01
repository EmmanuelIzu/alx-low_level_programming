#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds to the begging of the list
 * @head: the head pointer
 * @n: the data to the new pointer
 * Return: return the element
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	new_node->next = *head;
	*head = new_node;

	return (*head);
}
