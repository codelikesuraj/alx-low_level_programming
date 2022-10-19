#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from
 * n to 98
 * @n: starting point
 */
void print_to_98(int n)
{
	int limit = 98;

	if (n <= limit)
	{
		do
		{
			printf("%d", n);
			if (n != limit)
				printf(", ");
			n++;
		} while (n < limit);
	} else if (n > limit)
	{
		while (n != limit)
		{
			printf("%d", n);
			if (n != limit)
				printf(", ");
			n--;
		}
	}
}

