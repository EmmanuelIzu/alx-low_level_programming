#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - add to the end of the list
 * @head: the head pointer
 * @n: the data
 * Return: returns NULL or the element
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (*head);
	}
	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = new_node;

	return (*head);

}
