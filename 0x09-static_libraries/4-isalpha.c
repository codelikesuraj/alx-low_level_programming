#include "main.h"

/**
 * _isalpha - checks for alphabet
 * @c: value to be checked
 *
 * Return: 1 if lowercase and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
