#include <stdio.h>

/**
 * main - Print 0 - 9 using only putchar()
 *
 * Description: Prints 0 - 9 separated by comma
 * followed by a space using only putchar()
 * without using variable of type 'char'
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
