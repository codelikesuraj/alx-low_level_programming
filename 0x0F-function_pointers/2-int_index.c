#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: number of elements in array
 * @cmp: pointer to the function used
 * to compare values
 *
 * Return: Number of elements or -1
 * when size <= 0 or no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, matches;

	if (size <= 0 || array == NULL || !cmp || !array)
		return (-1);

	matches = 0;
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			matches++;
	}

	return (matches > 0 ? matches : -1);
}
