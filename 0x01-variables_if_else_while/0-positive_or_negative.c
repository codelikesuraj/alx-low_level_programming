#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print the state of a random number.
 *
 * Description: A random number is generated and
 * prints if it is negative, positive or is zero
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d ", n);
	if (n > 0)
		printf("is positive");
	else if (n == 0)
		printf("is zero");
	else
		printf("is negative");
	printf("\n");
	return (0);
}
