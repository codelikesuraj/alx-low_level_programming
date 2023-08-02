#include "main.h"

/**
 * _strchr - locate the first occurence of a charcter in a string
 * @s: string to be checked
 * @c: character to look for
 *
 * Return: pointer to the first occurence or 'NULL' if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
			return (&s[i]);
	}
	return (NULL);
}
