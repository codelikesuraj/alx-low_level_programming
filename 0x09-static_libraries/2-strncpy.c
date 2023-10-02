#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: string to be added
 * @n: number of bytes from src
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
		dest_len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
