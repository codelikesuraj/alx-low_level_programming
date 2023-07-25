#include "main.h"

/**
 * puts_half - prints the last half of a string
 * @str: pointer to string
 */
void puts_half(char *str)
{
	int i, n = 0;

	while (str[n] != '\0')
		n++;

	if (n > 0 && n % 2)
		i = (n - 1) / 2;
	else
		i = n / 2;

	for (; i <= n; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
