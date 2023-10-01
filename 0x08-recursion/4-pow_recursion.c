#include "main.h"

/**
 * _pow_recursion - returns the value of
 * 'x' raised to the power of 'y'.
 * @x: value to be raised
 * @y: value of power
 * Return: Value of 'x' raised to 'y' or
 * '-1' when 'y' is less than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
