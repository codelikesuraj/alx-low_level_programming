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
	int i, len_name, len_owner;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	len_name = _strlen(name);
	len_owner = _strlen(owner);

	dog->name = malloc((len_name + 1) * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc((len_owner + 1) * sizeof(char));
	if (dog->name == NULL && dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < len_name; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	dog->age = age;

	for (i = 0; i < len_owner; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';

	return (dog);
}
