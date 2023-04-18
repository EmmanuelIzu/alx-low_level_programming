#include "dog.h"
/**
 * free_dog - free the malloc
 * @d: the structure
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
