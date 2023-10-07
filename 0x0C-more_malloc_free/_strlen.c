#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}
