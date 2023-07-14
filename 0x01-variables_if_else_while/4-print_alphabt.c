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
	char c = 'a';

	while (c <= 'z')
	{
		if ((c == 'e') || (c == 'q'))
			continue;
		putchar(c);
		c++;
	}
	printf('\n');
	return (0);
}
