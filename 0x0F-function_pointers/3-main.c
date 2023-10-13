#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - performs and operation based
 * on an operator and two other values
 * @argc: number of arguments
 * @argv: array of arguments passed
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *operator;
	int num1, num2;

	if (argc < 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (!(
			strcmp(operator, "+") == 0 ||
			strcmp(operator, "-") == 0 ||
			strcmp(operator, "*") == 0 ||
			strcmp(operator, "/") == 0 ||
			strcmp(operator, "%") == 0
		)
	)
	{
		printf("Error\n");
		return (99);
	}

	if ((strcmp(operator, "/") == 0 || strcmp(operator, "%") == 0) && (num2 == 0))
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", get_op_func(operator)(num1, num2));

	return (0);
}
