#include "main.h"

/**
 * _strpbrk - locates first occurence of any bytes in a string
 * @s: string to be checked
 * @accept: string containing character to be searched
 *
 * Return: pointer to the byte in 's' or 'NULL' if not found
 * 's' consisting of only bytes from 'accept'
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return ('\0');
}
