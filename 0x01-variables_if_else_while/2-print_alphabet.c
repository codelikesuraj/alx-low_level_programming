#include <stdio.h>

/**
 * main - Print the lowercase alphabets
 *
 * Description: Prints all the alphabets in lowercase
 * Return: 0 on success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
