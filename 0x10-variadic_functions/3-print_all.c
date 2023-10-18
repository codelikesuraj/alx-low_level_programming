#include "_strlen.c"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * separated by a defined separator
 * followed by a new line at the end
 * @format: format that should be used
 * to print the variadiands
 */
void print_all(const char * const format, ...)
{
	int i, l, valid;
	char *s;
	va_list ap;

	i = 0;
	if (format == NULL)
		return;
	l = _strlen((char *)format);
	va_start(ap, format);
	while (i < l)
	{
		valid = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				valid = 0;
				break;
		}
		if ((i < (l - 1)) && (valid == 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
