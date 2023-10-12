#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * separated by a defined separator
 * followed by a new line at the end
 * @separator: separator
 * @n: number of variables
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n < 1)
		return;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
