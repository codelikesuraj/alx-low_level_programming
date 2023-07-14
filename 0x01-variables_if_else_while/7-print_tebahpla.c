#include <stdio.h>

/**
 * main - Print the lowercase alphabets in revers
 *
 * Description: Prints all the alphabets in lowercase in reverse
 * Return: 0 on success
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
