#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 
 * in lowercase 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int lines = 10;

	while (lines > 0)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}

		_putchar('\n');

		lines--;
	}
}
