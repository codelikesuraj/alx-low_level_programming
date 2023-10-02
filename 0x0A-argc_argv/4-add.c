#include <stdio.h>
#include <stdlib.h>

/**
 * isNumeric - checks if a string is a
 * numeric value
 * @str: string to be checked
 * Return: 1 if is numeric, 0 otherwise
 */
int isNumeric(char *str)
{
	for (; *str != '\0'; str++)
	{
		if (*str < 48 || *str > 57)
			return (0);
	}
	return (1);
}

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
			if (!isNumeric(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
