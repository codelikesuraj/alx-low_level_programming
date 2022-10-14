#include <stdio.h>
#include <stdlib.h>

/**
 * main - no description (testing this)
 * Return: Always (0) Success
 */
int main(void)
{
	int numbers;

	for (numbers = 48; numbers < 103; numbers++)
	{
		if (numbers == 58)
			numbers = 97;
		putchar(numbers);
	}
	putchar('\n');

	return (0);
}
