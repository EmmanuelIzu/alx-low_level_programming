#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees the list
 * @head: the header
 *
 */
void free_list(list_t *head)
{
	list_t *release = head;

	free(release->str);
	free(release);
}
