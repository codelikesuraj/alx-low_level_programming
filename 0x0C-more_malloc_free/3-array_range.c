#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of
 * integers containing values from
 * min to max
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to newly created
 * array or NULL if min or max is zero
 * or malloc fails
 */
int *array_range(int min, int max)
{
	int *alloc, i, r;

	if (min >= max)
		return (NULL);

	r = max - min + 1;
	alloc = malloc(r * sizeof(int));
	if (alloc == NULL)
		return (NULL);

	for (i = 0; i < r; i++)
		alloc[i] = min + i;

	return (alloc);
}
