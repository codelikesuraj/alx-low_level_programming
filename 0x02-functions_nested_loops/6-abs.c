#include "main.h"

/**
 * _abs - computes the absolute value of an interger
 * @n: value to be computed
 *
 * Description: computest the absolute value of an integer
 * Returns: absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	return (n);
}
