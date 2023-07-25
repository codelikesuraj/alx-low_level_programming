#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char temp[] = {};
	int i, n = 0;

	while (s[n] != '\0')
	{
		temp[n] = s[n];
		n++;
	}

	for (i = 0; i < n; i++)
		s[n] = temp[n - i + 1];

	for (i = 0; i <= n; i++)
		_putchar(s[n]);

	for (i = 0; i <= n; i++)
		_putchar(temp[n]);


	_putchar('\n');
}
