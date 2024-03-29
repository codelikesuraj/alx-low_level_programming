#include "main.h"

/**
 * print_rev - prints a string followed by a new line to stdout
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;

	while (n)
		_putchar(s[--n]);
	_putchar('\n');
}
