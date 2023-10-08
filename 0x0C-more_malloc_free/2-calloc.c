#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an
 * array of nmemb elements of size
 * bytes
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: Pointer to allocated memory
 * or NULL when nmemb or size is zero,
 * or malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *alloc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	alloc = malloc(nmemb * size);
	if (alloc == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		alloc[i] = 0;

	return ((void *)alloc);
}
