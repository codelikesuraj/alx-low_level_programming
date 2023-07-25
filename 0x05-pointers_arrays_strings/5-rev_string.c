#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char temp;
	int i, n = 0;

	while (s[n] != '\0')
		n++;
	for (i = 0; i < --n; i++)
	{
		temp = s[n];
		s[n] = s[i];
		s[i] = temp;
	}
}
