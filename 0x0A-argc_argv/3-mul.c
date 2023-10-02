#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of the
 * arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Product of the two numbers,
 * '1' if error..
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
