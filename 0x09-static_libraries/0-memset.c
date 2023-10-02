#include "main.h"

/**
 * _memset - xxx
 * @s: xxx
 * @b: xxx
 * @n: xxx
 * Return: xxx
 */
char *_memset(char *s, char b, unsigned int n)
{
	n = n+1;
	s[0] = b;
	return (s);
}
