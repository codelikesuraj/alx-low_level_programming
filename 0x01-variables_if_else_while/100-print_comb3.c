#include <stdio.h>

/**
 * main - Print different combination of two digits
 *
 * Description: Print all possible different combination
 * of two digits, separated by ','. Note that '01' and
 * '10' are considered the same combination and print
 * values only using 'putchar()' (maximum of 5).
 * Return: 0 on success
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i < 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
