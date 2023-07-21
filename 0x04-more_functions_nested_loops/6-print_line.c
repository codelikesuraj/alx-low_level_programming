#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * @n: number of times '_' should be printed
 * Description: print '_' n times followed by a new line
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
