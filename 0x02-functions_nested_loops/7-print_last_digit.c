#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be processed
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	if (n == 0)
		return (0);

	if (n < 0)
		n *= -1;

	n = n % 10;
	_putchar('0' + n);
	return (n);
}
