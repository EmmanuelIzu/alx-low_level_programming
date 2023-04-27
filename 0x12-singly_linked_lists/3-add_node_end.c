#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - adds element at the end of the list
 * @head: points to the list
 * @str: the list element
 * Return: returns a header or null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *tempo;

	newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	tempo = *head;

	while (tempo->next != NULL)
	{
		tempo = tempo->next;
	}

	tempo->next = newNode;

return (*head);
}
