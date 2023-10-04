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

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	l3 = l1 + l2 + 1;
	concat = malloc(l3 * sizeof(char));
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < l3; i++)
	{
		if (i < l1)
			concat[i] = s1[i];
		else
			concat[i] = s2[i - l1];
	}
	concat[l3] = '\0';
	return (concat);
}
