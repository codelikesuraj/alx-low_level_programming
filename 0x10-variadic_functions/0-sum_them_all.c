#include <stdarg.h>

/**
 * sum_them_all - sums all the values
 * passed in the parameter
 * @n: paremeter
 *
 * Return: sum of all the passed
 * paremeters or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ap;

	if (n < 1)
		return (0);

	sum = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);
	va_end(ap);

	return (sum);
}
