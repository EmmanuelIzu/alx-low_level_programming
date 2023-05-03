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
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (!head || !head->next)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare != NULL)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
				nodes++;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				nodes++;
			}

			return (nodes);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
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

