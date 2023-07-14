#include <stdio.h>

/**
 * main - Print all the alphabets
 *
 * Description: Prints all the alphabets 
 * Return: 0 on success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'Z'; c++)
	{
		if (c == 'z')
			c = 'A';
		putchar(c);
	}
	putchar('\n');
	return (0);
}