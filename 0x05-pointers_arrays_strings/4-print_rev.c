#include "main.h"

/**
 * _print_rev - prints a string followed by a new line to stdout
 * @str: string to be printed
 */
void _print_rev(char *s)
{
	int len = 0;
	int n;

	for (; *s != '\0'; s++)
		len++;
	for (n = 0; n < len + 1; n--)
		_putchar(*(str--);
	_putchar('\n');
}
