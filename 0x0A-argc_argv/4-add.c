#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of the
 * arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Sum of the all the arguments,
 * '1' if error.
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int arg = atoi(argv[i]);

			if (arg == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += arg;
		}
	}
	printf("%d\n", sum);
	return (0);
}
