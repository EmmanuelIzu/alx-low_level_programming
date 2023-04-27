#include<string.h>
#include<stdio.h>
#include "lists.h"

/**
 * print_list - prints the content of a list
 * @h: list header
 * Return: returns the length of the list
 *
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%ld] %s\n", strlen(h->str), h->str);

	h = h->next;
	count++;
	}
return (count);
}
