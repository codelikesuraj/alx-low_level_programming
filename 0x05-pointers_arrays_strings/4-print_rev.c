#include "main.h"

/**
 * print_rev - prints a string followed by a new line to stdout
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int n = 0;

	for (; *str != '\0'; str++)
	{
		_putchar(*str);
		n++;
	}

	for (; n >= 0; n--)
	{
		_putchar(*str);
		n--;
	}

	__putchar('\n');
}
