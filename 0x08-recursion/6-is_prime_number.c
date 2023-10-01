#include "main.h"

/**
 * check_prime - check if an integer is
 * a prime number
 * @n: integer to be checked
 * @i: ?
 * Return: 1 if it is a prime number, 0
 * otherwise
 */
int check_prime(int n, int i)
{
	if (i > 9)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - checks if an integer
 * is a prime number
 * @n: integer to be checked
 * Return: 1 if it is a prime number, 0
 * otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check_prime(n, 2));
}
