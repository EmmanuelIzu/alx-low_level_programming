#ifndef DOG_H
#define DOG_H
/**
* struct dog - for dog
* @name: dog name
* @age: Dog age
* @owner: onwer of Dog
* Description: Longer description
*/
	struct dog
	{
	char *name;
	float age;
	char *owner;
	};

	typedef struct dog dog_t;

	void init_dog(struct dog *d, char *name, float age, char *owner);
	void print_dog(struct dog *d);
	dog_t *new_dog(char *name, float age, char *owner);
	void free_dog(dog_t *d);

#endif

