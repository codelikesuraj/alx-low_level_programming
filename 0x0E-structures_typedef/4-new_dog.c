#include "dog.h"
#include "_strlen.c"
#include <stdlib.h>

/**
 * new_dog - initializes a new instance
 * of type dog_t
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to the new dog_t or
 * NULL on errro;
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (_strlen(name) < 1 || _strlen(owner) < 1)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc((_strlen(name) + 1) * sizeof(char *));
	dog->owner = malloc((_strlen(owner) + 1) * sizeof(char *));
	if (dog->name == NULL && dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		return (NULL);
	}

	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
