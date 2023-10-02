#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if equal, negative number
 * if less & positive if greater
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int r = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		r = s1[i] - s2[i];
		if (r != 0)
			return (r);
		i++;
	}

	return (r);
}
