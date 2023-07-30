#include <stdio.h>

/**
 * main - print to stderr
 * Return: always 0
 */
int main(void)
{
	char m[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fprintf(stderr, "%s", m);
	return (1);
}
