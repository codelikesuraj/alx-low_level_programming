#include "main.h"

/**
 * print_times_table - print times table from 0 to n
 * @n: limit for timetable
 */
void print_times_table(int n)
{
	int addition = 0, rows = 0, cols, multiplication;

	if (n >= 0 && n <= 15)
	{
		while (rows < n + 1)
		{
			cols = 0;
			multiplication = 0;

			while (cols < n + 1)
			{
				if (cols == 0)
					_putchar('0');
				if (cols > 0)
				{
					multiplication += addition;
					if (multiplication < 10)
						_putchar(multiplication + '0');
					if (multiplication > 9)
					{
						_putchar(multiplication / 10 + '0');
						_putchar(multiplication % 10 + '0');
					}
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
}
