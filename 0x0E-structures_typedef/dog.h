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
/**
 * dog_t - typedef for struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void free_dog(dog_t *d);

#endif

