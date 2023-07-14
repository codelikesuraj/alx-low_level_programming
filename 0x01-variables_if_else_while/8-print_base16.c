#include <stdio.h>

/**
 * main - Print all the base 16 numbers in lowercase
 *
 * Description: Prints all the base 16 numbers in lowercase
 * Return: 0 on success
 */
int main(void)
{
	char c;
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
