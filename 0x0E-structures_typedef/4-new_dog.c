#include "dog.h"
#include "_strcpy.c"
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
	int len_name, len_owner;

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
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->name[len_name] = '\0';
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);
	dog->owner[len_owner] = '\0';

	return (dog);
}
