#include "main.h"

/**
 * print_diagonal - draw a diagonal line in the terminal
 * @n: number of times '\' should be printed
 * Description: print '\' n times followed by a new line
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0, i < n; i++)
	{
		for (j = 1; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
