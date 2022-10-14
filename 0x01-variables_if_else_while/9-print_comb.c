#include <stdio.h>
#include <stdlib.h>

/**
 * main - no description (testing this)
 * Return: Always (0) Success
 */
int main(void)
{
	int numbers = 48;

	while (numbers < 58)
	{
		putchar(numbers);
		if (numbers != 57)
		{
			putchar(44);
			putchar(32);
		}
		numbers++;
	}
	putchar('\n');

	return (0);
}
