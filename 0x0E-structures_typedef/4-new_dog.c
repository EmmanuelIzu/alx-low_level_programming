#include <stdlib.h>
#include "dog.h"


/**
* _strlen - returns the length of a string
* @s: string to evaluate
* Return: the length of the string
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
* _strcpy - copies the string pointed to by src
* including the terminating null byte (\0)
* to the buffer pointed to by dest
* @desti: pointer to the buffer in which we copy the string
* @srcs: string to be copied
* Return: the pointer to dest
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
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: pointer to the new dog (Success), NULL otherwise
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
