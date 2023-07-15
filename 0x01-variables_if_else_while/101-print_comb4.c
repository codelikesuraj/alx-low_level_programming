#include <stdio.h>

/**
 * main - Print different combination of three digits
 *
 * Description: Print all possible different combination
 * of three digits, separated by ','. Note that '012',
 * '120', '102', '021', '201' & '210' are considered
 * the same combination and print values only using
 * 'putchar()' which can only be used max. 6 times.
 * Return: 0 on success
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i < 55)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
