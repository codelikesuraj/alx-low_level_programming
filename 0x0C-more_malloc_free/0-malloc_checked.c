#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * using malloc
 * @b: size
 *
 * Return: pointer to allocated memory
 * or terminate with status value '98'.
 */
void *malloc_checked(unsigned int b)
{
	int *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);

	return (m);
}
