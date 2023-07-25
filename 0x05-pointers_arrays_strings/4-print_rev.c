#include "main.h"

/**
 * print_rev - prints a string followed by a new line to stdout
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int len = 0;
	int n;

	for (; *s != '\0'; s++)
		len++;
	for (n = 0; n < len + 1; n--)
		_putchar(s[i]);
	_putchar('\n');
}
