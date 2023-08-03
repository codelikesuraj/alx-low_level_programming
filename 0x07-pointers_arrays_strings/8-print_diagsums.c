#include <stdio.h>

/**
 * print_diagsums - prints the sum of the 2 diagonals in a square matrix
 * @a: multi-dimensional array of integers
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum;

	i = 0;
	sum = 0;
	while (i <= (size * size) - 1)
	{
		sum  += a[i];
		i += size + 1;
	}
	printf("%d, ", sum);

	i = size - 1;
	sum = 0;
	while (i <= (size * size) - size)
	{
		sum += a[i];
		i += size - 1;
	}
	printf("%d\n", sum);
}
