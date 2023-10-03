#include "_strlen.c"
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicated
 * string; NULL if str is NULL or has
 * insufficient memory
 */
char *_strdup(char *str)
{
	char *arr;
	int i, l;

	l = _strlen(str);
	arr = malloc(l * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
		arr[i] = str[i];
	return (arr);
}
