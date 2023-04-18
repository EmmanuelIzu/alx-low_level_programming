#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free the malloc
 * @d: the structure
 */

void free_dog(dog_t *d)
{

	free(d->name);
	free(d->owner);
	free(d);
}
