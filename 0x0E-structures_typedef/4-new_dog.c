#include <stdio.h>
#include <stdlib.h>
#include "dog.h""
/**
 * _strlen - a fuction that calculates the
 * length of name and owner
 * Return: length
 */

int _strlen(const char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		legth++;
	}
	return (length);
}

/**
 * string_copy - Function to get the length of a string
 * @str: the string to be copied
 */

char *string_copy(const char *str)
{
	int len = _strlen(str), i;
	char *copy = malloc(len + 1);

	if (copy != NULL)
	{
		for (i = 0; i <= len; i++)
		{
			copy[i] = str[i];
		}
	}
	return (copy);
}


/**
 * new_dog - a function that makes a copy of
 * name and owner of the original
 * @name: a pointer to the name
 * @age: the age variable
 * @owner: a pointer to the owner's name
 *
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = string_copy(name);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age  = age;

	new_dog->owner = string_copy(owner);

	if (new_dog->owner == NULL)
	{
		free(new_dog ->name);
		free(new_dog);
		return (NULL);
	}

	return new_dog;
}
