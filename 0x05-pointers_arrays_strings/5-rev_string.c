#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char c;
	int i, n = 0;

	while (s[n] != '\0')
		n++;

	for (i = 0; i < n; i++)
	{
		_putchar('a');
		c = s[i];
		s[i] = s[n];
		s[n] = c;
	}

	/*
	 * for (i = 0; i <= n; i++)
	 * _putchar(s[n]);
	 * _putchar('\n');
	 */
}
