#include "main.h"

/**
 * more_numbers - print 0-14 10 times each on a separate line
 */
void more_numbers(void)
{
	int i, n;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
