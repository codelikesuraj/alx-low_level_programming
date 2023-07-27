#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to be encoded
 * Return: encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char top[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char bottom[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; top[j] != '\0'; j++)
		{
			if (str[i] == top[j])
			{
				str[i] = bottom[j];
				break;
			}
		}
	}
	return (str);
}
