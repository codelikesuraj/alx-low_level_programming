#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char *temp = s;
	int i, n = 0;

	while (s[n] != '\0')
		n++;

	for (i = 0; i <= n; i++)
		s[i] = temp[n - i];

	for (i = 0; i <= n; i++)
		// _putchar(s[n]);

	// _putchar('\n');
}
