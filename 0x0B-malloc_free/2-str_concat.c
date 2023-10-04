#include "main.h"
#include "_strlen.c"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated
 * string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, l1, l2, l3;

	if (s1 == NULL)
		l1 = 0;
	else
		l1 = _strlen(s1);
	if (s2 == NULL)
		l2 = 0;
	else
		l2 = _strlen(s2);
	printf("Length s1: %d\n", l1);
	printf("Length s2: %d\n", l2);
	l3 = l1 + l2 + 1;
	concat = malloc(l3 * sizeof(char));
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		concat[i] = s1[i];
	for (i = 0; i < l2; i++)
		concat[i + l1] = s2[i];
	concat[l3] = '\0';
	return (concat);
}
