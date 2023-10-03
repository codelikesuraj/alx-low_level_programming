#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of
 * chars, and initializes it with a
 * specific char.
 * @size: size of the array
 * @c: character to be used
 *
 * Return: NULL if size is 0, pointer
 * to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size < 1)
		return (NULL);

	arr = malloc(size * sizeof(c));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (int)size; i++)
		*(arr + i) = c;

	return (arr);
}
