#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from
 * n to 98
 * @n: starting point
 */
void print_to_98(int n)
{
	int counter = 0;
	int limit = 98;

	if (n < 0)
	{
		while (counter <= -n + limit)
		{
			printf("%d", n);
			if (n != limit)
				printf(", ");
			n++;
			counter++;
		}
	} else if (n >= 0 && n <= limit)
	{
		while (counter <= limit - n)
		{
			printf("%d", n);
			if (n != limit)
				printf(", ");
			n++;
			counter++;
		}
	} else if (n >= 0 && n > limit)
	{
		while (counter <= n - limit)
		{
			printf("%d", n);
			if (n != limit)
				printf(", ");
			n--;
			counter++;
		}
	}
}

