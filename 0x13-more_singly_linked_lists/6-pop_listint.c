#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes head node
 * @head: the head node
 * Return: return the head node data
 *
 */

int pop_listint(listint_t **head)
{
	int data;

	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);

return (data);


}


