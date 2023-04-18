#include <stdlib.h>
#include "dog.h"


/**
* _strlen - string length function
* @s: string to check the length
* Return: interger length of the string
*/
	int _strlen(char *s)
	{
		int i;


		i = 0;

		do {

		i++;

		} while (s[i] != '\0');

		return (i);
	}


/**
* _strcpy - Copy from one buffer to the other
* @desti: destination
* @srcs: source
* Return: the pointer to destination
*/
	char *_strcpy(char *desti, char *srcs)
	{
		int length, i = 0;


		length = _strlen(srcs);

		do {

			desti[i] = srcs[i];
			i++;

		} while (i < length);

		desti[i] = '\0';


		return (desti);
	}

/**
* new_dog - creates new structure
* @name: name of dog as input
* @age: age of dog as input
* @owner: owner of dog input
* Return: NULL or new structure.
*/
	dog_t *new_dog(char *name, float age, char *owner)
	{
		dog_t *dog;
		int length1, length2;


		length1 = _strlen(name);
		length2 = _strlen(owner);


		dog = malloc(sizeof(dog_t));
		if (dog == NULL)
			return (NULL);


		dog->owner = malloc(sizeof(char) * (length2 + 1));
		if (dog->owner == NULL)
		{
			free(dog);
			return (NULL);
		}

		dog->name = malloc(sizeof(char) * (length1 + 1));
		if (dog->name == NULL)
		{
			free(dog);
			free(dog->owner);
			return (NULL);
		}

		_strcpy(dog->name, name);
		_strcpy(dog->owner, owner);
		dog->age = age;


		return (dog);
	}
