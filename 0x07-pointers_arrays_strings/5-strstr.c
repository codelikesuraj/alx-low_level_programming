#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be checked
 * @needle: substring to be searched for
 *
 * Return: pointer to the beginning of located substring.
 * NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, n;
	int len_haystack = 0;
	int len_needle = 0;

	while (haystack[len_haystack] != '\0')
		len_haystack++;
	while (needle[len_needle] != '\0')
		len_needle++;

	if (len_haystack < 1 || len_needle < 1)
		return ('\0');

	for (i = 0; i < len_haystack; i++)
	{
		if ((haystack[i] == needle[0]) && (len_needle == len_haystack - i))
		{
			n = 0;
			for (j = 0; j < len_needle; j++)
			{
				if (haystack[i + j] == needle[j])
					n++;
			}
			if (n == len_needle)
				return (&haystack[i]);
		}
	}
	return ('\0');
}
