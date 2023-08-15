#ifndef DOG_H
#define DOG_H

/**
 * dog - a struct type that cointain members that
 * holds the name of a dog, the age and the name
 * of the owner
 * @name: First member
 * @age: Second member
 * @owner: Third member
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
typedef struct dog dog_t;

init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
char *string_copy(const char *source);
int _strlen(const char *str);

#endif
