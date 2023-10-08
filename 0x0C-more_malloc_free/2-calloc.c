#include "main.h"
#include <limits.h>
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
	if (nmemb == 0 || size == 0)
		return (NULL);

	if (size > (INT_MAX / nmemb))
		return (NULL);

	return (NULL);
}
