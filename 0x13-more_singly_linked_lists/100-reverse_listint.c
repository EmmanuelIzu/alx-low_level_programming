#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: head pointer
 * Return: returns the pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *back = NULL;
	listint_t *front = NULL;

	while (*head != NULL)
	{
		front = (*head)->front;
		(*head)->front = back;
		back = *head;
		*head = front;
	}

	*head = prev;

	return (*head);
}

