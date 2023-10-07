#include "main.h"
#include "_strlen.c"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_strlen - get string length
 * @str: string to be checked
 *
 * Return: length of str
 */
unsigned int get_strlen(char *str)
{
	if (str == NULL)
		return (0);

	printf("Length of \"%s\": %d\n", str, _strlen(str));
	return (_strlen(str));
}

/**
 * str_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * n: number of bytes
 *
 * Return: pointer to the concatenated
 * string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, l1, l2, l3;

	l1 = get_strlen(s1);
	l2 = get_strlen(s2);
	if (n < l2)
		l2 = n;

	l3 = l1 + l2 + 1;
	concat = malloc(l3 * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		concat[i] = s1[i];

	for (i = 0; i < l2; i++)
	{
		printf("s2[%d] => %c\n", i, s2[i]);
		concat[i + l1] = s2[i];
	}

	concat[l3] = '\0';

	return (concat);
}
