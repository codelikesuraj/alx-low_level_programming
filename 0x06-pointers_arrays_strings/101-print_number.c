#include "main.h"

/**
 * print_number - print an integer
 * @n: integer
 */
void print_number(int n)
{
	int a[32];
	int len = 0;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	while (1)
	{
		a[len] = n % 10;
		n /= 10;
		len++;
		if (n == 0)
			break;
	}

	while (--len >= 0)
	{
		_putchar(a[len] + '0');
	}
}
