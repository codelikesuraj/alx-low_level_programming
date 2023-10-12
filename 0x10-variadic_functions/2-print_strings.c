#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * separated by a defined separator
 * followed by a new line at the end
 * @separator: separator
 * @n: number of variables
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		printf("%s", ((str == NULL) ? "(nil)" : str));
		if (separator == NULL || i == n - 1)
			continue;
		printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
