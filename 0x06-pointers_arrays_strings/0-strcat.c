#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: string to be added
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int dest_len, src_len, i;

	for (; *dest != '\0'; dest++)
		dest_len++;
	for (; *src != '\0'; src++)
		src_len++;
	for (i = 0; i < src_len && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
