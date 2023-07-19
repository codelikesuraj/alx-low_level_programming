#include "main.h"

/**
 * print_to_98 - prints numbers from n to 98
 * @n: starting value
 */
void print_to_98(int n)
{
	int counter = 1;

	if (n < 0)
		counter = -1;

	do {
		printf("%d\n", n);
		n += counter;
	} while (n != 98);
}
