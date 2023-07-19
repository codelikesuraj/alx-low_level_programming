#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Description: prints the table in the format below:
 * 0,  0,  0,  0,  0,  0,  0,  0,  0,  0
 * 0,  1,  2,  3,  4,  5,  6,  7,  8,  9
 * 0,  2,  4,  6,  8, 10, 12, 14, 16, 18
 * ...
 * 0,  9, 18, 27, 36, 45, 54, 63, 72, 81
 */
void times_table(void)
{
	int a, b, m;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			m = a * b;
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (m < 10)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
