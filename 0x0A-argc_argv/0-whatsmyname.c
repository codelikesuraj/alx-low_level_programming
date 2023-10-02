#include "_puts.c"
#include "main.h"

/**
 * main - prints the name of the file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always '0'.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	_puts(argv[0]);
	_putchar('\n');
	return (0);
}
