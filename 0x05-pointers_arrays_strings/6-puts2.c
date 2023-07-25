#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: pointer to string
 */
void puts2(char *str)
{
	int i = 0;

	for (; *str != '\0'; str++)
	{
		if (i == 0 || i % 2)
			putchar(*str);
		i++;
	}

	_putchar('\n');
}
