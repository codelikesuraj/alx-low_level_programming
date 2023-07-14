#include <stdio.h>

/**
 * main - Print lowercase alphabet except q and e
 *
 * Description: Prints all the lowercase
 * alphabets except for letters q and e
 * Return: 0 on success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if ((c == 'e') || (c == 'q'))
			continue;
		else
			putchar(c);
	}
	putchar('\n');
	return (0);
}
