#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 * Description: encodes a string into 1337 as follows,
 * a or A = 4
 * e or E = 3
 * o or O = 0
 * t or T = 7
 * l or L = 1
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;
	char lower[] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't'};
	char upper[] = {'O', 'L', '\0', 'E', 'A', '\0', '\0', 'T'};


	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (str[i] == lower[j] || str[i] == upper[j])
			{
				str[i] = j + '0';
				break;
			}
		}
	}

	return (str);
}
