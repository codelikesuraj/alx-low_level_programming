#include "main.h"

/**
 * times_table - print times table from 0 to 9
 * Return: Always (0) Success
 */
void times_table(void)
{
	int additions = 0, rows = 0, cols, multiplication;

	while (rows < 10)
	{
		cols = 0;
		multiplication = 0;

		while (cols < 10)
		{
			if (cols == 0)
				_putchar('0');
			if (cols > 0)
			{
				multiplication += addition;
				_putchar(multiplication + '0');
			}
			if (cols < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (multiplication + addition < 10)
					_putchar(' ');
			}
			cols++;
		}
		_putchar('\n');
		addition++;
		rows++;
	}
}
