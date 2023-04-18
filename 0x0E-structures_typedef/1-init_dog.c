#include "dog.h"

/**
 * init_dog - initialise structure
 * @d: input structure
 * @name: struct values
 * @age: struct values
 * @owner: structure values
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}
