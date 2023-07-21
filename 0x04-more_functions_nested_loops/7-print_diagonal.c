#include "main.h"

/**
 * print_diagonal - draw a diagonal line in the terminal
 * @n: number of times '\' should be printed
 * Description: print '\' n times followed by a new line
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
