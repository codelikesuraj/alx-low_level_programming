#include "main.h"

/**
 * jack_bauer - prints time from '00:00' to '23:59'
 * Return: Always (0) Success
 */
void jack_bauer(void)
{
	int num1, num2, num3, num4;

	for (num1 = 0; num1 < 3; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			for (num3 = 0; num3 < 7; num3++)
			{
				for (num4 = 0; num4 < 10; num4++)
				{
					_putchar(num1 + '0');
					_putchar(num2 + '0');
					_putchar(':');
					_putchar(num3 + '0');
					_putchar(num4 + '0');
					_putchar('\n');
					if (num4 == 9)
						break;
				}
				if (num3 == 5)
					break;
			}
			if (num1 ==2 && num2 == 3)
				break;
		}
	}
}
