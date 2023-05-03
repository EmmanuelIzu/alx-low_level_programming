#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *temp, *hold;
	size_t nodes = 1;

	if (!head || !head->next)
		return (0);

	temp = head->next;
	hold = (head->next)->next;

	while (hold != NULL)
	{
		if (temp == hold)
		{
			temp = head;
			while (temp != hold)
			{
				temp = temp->next;
				hold = hold->next;
				nodes++;
			}

			temp = temp->next;
			while (temp != hold)
			{
				temp = temp->next;
				nodes++;
			}

			return (nodes);
		}

		temp = temp->next;
		hold = (hold->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t 
 * @head: A The head pointer
 * Return: return nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t points, count = 0;

	points = looped_listint_len(head);

	if (points == 0)
	{
		points = 0;
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;

			points++;
		}
	}

	else
	{
		count = 0;
		while (count < points)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;

			count++;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (points);
}

