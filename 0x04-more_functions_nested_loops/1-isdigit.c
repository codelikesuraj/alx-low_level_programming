#include "main.h"

/**
 * _isdigit - checks for a digit (0-9)
 * @c: digit to be checked
 * Return: 1 if digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
