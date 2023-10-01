#include "main.h"

/**
 * _check_square - checks if the square
 * of 'i' equals 'n'
 * @n: number to be checked
 * @i: nubmer to be squared
 * Return: i if i*i = n, -1 if i*i > n
 */
int _check_square(int n, int i)
{
	int square = i * i;

	if (n == square)
		return (i);
	if (n < square)
		return (-1);
	return (_check_square(n, i + 1));
}

/**
 * _sqrt_recursion - returns the square
 * root of a number
 * @n: number to be processed
 * Return: The square root of the number
 * or '-1' if 'n' does not have a natural
 * square root
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	if (n == 1)
		return (1);
	return (_check_square(n, 1));
}
