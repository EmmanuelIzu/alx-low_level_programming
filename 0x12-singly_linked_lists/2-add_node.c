#include "lists.h"
#include <stdlib.h>
#include "string.h"

/**
 * add_node - adds new node to the list
 * @str: holds the element of the new new node
 * @head: points to list header
 * Return: returns 0;
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	if (str)
	{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);

	newNode->next = *head;

	*head = newNode;
	}

return (*head);
}
