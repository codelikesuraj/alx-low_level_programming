#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be checked
 * @accept: string containing character to be matched
 *
 * Return: number of bytes in the initial segment of
 * 's' consisting of only bytes from 'accept'
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, m;
	unsigned int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		m = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				m = 1;
				break;
			}
		}
		if (m == 1)
			n++;
		else
			break;
	}
	return (n);
}
