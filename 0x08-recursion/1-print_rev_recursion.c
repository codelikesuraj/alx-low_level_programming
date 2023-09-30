#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse to stdout
 * @s: string to be printed
 */
void _print_rev_recursion_aux(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion_aux(s + 1);
	_putchar(*s);
}

/**
 * _print_rev_recursion_aux - prints a string in reverse followed 
 * by a newline to stdout
 * @s: string to be printed
 */
void _print_rev_recursion(char *s)
{
	_print_rev_recursion_aux(s);
	_putchar('\n');
}
