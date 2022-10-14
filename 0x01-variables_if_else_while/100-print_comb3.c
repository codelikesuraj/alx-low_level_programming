#include <stdio.h>
#include <stdlib.h>

/**
 * main - no description (testing this)
 * Return: Always (0) Success
 */
int main(void)
{
	int num1, num2;

	for (num1 = 48; num1 < 57; num1++)
	{
		for(num2 = num1 + 1; num2 < 58; num2++)
		{
			putchar(num1);
			putchar(num2);
			if (num1 != 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
