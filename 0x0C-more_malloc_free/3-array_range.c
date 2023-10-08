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
	int *alloc;

	if (min >= max)
		return (NULL);

	alloc = malloc((max - min + 1) * sizeof(int));
	if (alloc == NULL)
		return (NULL);

	for (; min <= max; min++)
		alloc[min] = min;

	return (alloc);
}
