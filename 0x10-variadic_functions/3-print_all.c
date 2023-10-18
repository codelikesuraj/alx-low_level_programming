#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints a character
 * @arg: arguments list pointing to the
 * integer to be printed
 */
void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * print_float - prints a float value
 * @arg: arguments list pointing to the
 * float to be printed
 */
void print_float(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}

/**
 * print_int - prints an integer value
 * @arg: arguments list pointing to the
 * float to be printed
 */
void print_int(va_list arg)
{
	int n;

	n = va_arg(arg, int);
	printf("%d", n);
}


/**
 * print_string - prints a string
 * @arg: arguments list pointing to the
 * string to be printed
 */
void print_string(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - prints anything
 * separated by a defined separator
 * followed by a new line at the end
 * @format: format that should be used
 * to print the variadiands
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *separator;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		separator = ", ";
		switch (format[i])
		{
			case 'c':
				print_char(args);
				break;
			case 'i':
				print_int(args);
				break;
			case 'f':
				print_float(args);
				break;
			case 's':
				print_string(args);
				break;
			default:
				separator = "";
				break;
		}
		i++;
		if (format[i])
			printf("%s", separator);
	}
	printf("\n");
}
