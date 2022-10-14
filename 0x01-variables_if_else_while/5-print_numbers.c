#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints decimal numbers
 * from zero to nine
 * Return: Always (0) Success
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}
	printf("\n");
	return (0);
}

