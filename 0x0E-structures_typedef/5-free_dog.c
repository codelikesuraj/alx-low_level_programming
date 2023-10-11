#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated to
 * dog
 * @d: pointer to previously allocated
 * memory
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
