#include "main.h"

/**
 * _isalpha - checks for alphabet
 * @c: value to be checked
 *
 * Return: 1 if lowercase and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c >= 90))
	{
		return (1);
	}
	return (0);
}
