#include "main.h"

/**
 * print_to_98 - prints numbers from n to 98
 * @n: starting value
 */
void print_to_98(int n)
{
	int counter = 1;

	if (n == 0)
	{
		printf("%d\n", n);
	}
	else if (n < 0)
	{
		for (; n <= 98; n++)
		{
			print(n);
			if (n != 98)
				printf(", ");
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			print(n);
			if (n != 98)
				printf(", ");
		}
	}		
}
