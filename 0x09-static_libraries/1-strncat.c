#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: destination string
 * @src: string to be added
 * @n: number of bytes from src
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
		dest_len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	return (dest);
}
