#include "main.h"

/**
 * print_alphabet - prints the alphabets
 * in lower case
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	for (alphabet; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}
