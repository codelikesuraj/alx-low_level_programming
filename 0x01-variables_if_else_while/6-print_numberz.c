#include <stdio.h>

/**
 * main - Print 0 - 9 using only putchar()
 *
 * Description: Prints 0 - 9 using only putchar()
 * without using variable type 'char'
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
