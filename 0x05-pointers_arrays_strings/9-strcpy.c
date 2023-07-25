#include "main.h"

/**
 * _strcpy - copy string to destination
 * @dest: pointer to destination
 * @src: pointer to source
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	char *c = dest;

	while (*src != '\0')
		*dest++ = *src++;
	return (c);
}
