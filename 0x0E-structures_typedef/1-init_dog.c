#include "dog.h"

/**
 * init_dog - initializes a variable of
 * type dog
 * @d: pointer to struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *dog = &d;

	dog->name = name;
	dog->age = age;
	dog->owner = owner;
}
