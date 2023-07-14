#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print the state of the last digit of a random number
 *
 * Description: Assigns a random number to a variable and
 * prints if the last digit is positive, negative or zero
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	n %= 10;
	printf("%d", n);
	if (n > 5)
		printf(" and is greater than 5");
	else if (n == 0)
		printf(" and is 0");
	else if ((n < 6) && (n != 0))
		printf(" and is less than 6 and not 0");
	printf("\n");
	return (0);
}
