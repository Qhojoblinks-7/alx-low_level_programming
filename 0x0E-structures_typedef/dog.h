#ifndef DOG_H
#define DOG_H

/**
 * dog - a struct type that cointain members that
 * holds the name of a dog, the age and the name
 * of the owner
 * @name: First member
 * @age: Second member
 * @owner: Third member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
typedef struct dog dog_t;

#endif
