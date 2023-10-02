#include <stdio.h>
#include <stdlib.h>

/**
 * _error - prints "Error" to stdout
 * and returns 1.
 * @i: error code
 * Return: Always 1.
 */
int _error(int i)
{
	if (i == 0)
	{
		printf("%d\n", i);
		return (i);
	}
	printf("Error\n");
	return (i);
}

/**
 * main - prints the minimum number of
 * of coins to make change for an an
 * amount of money
 * @argc: no. of arguments
 * @argv: array of arguments
 * Return: 1 on success, 0 on error
 */
int main(int argc, char *argv[])
{
	int amount, cents;

	if (argc != 2)
		return (_error(1));

	amount = atoi(argv[1]);

	if (amount < 1)
		return (_error(0));

	cents = 0;

	if (amount >= 25)
	{
		cents += amount / 25;
		amount = amount % 25;
	}
	if (amount >= 10)
	{
		cents += amount / 10;
		amount = amount % 10;
	}
	if (amount >= 5)
	{
		cents += amount / 5;
		amount = amount % 5;
	}
	if (amount >= 2)
	{
		cents += amount / 2;
		amount = amount % 2;
	}
	if (amount >= 1)
	{
		cents += 1;
		amount = amount % 1;
	}
	printf("%d\n", cents);
	return (0);
}
