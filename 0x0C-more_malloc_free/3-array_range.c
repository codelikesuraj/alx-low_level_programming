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
	int *array, i, range;

	if (min > max)
		return (NULL);

	range = max - min + 1;
	array = malloc(range * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
		array[i] = min + i;

	return (array);
}
