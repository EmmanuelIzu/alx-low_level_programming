#ifndef DOG_H
#define DOG_H
/**
 * struct dog - The structure
 * @name: Name of Dog
 * @age: Dog age
 * @owner: Owner of Dog
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * typedef struct dog dog_t - creates alias name for dog
 *
 */
typedef struct dog dog_t;


#endif

