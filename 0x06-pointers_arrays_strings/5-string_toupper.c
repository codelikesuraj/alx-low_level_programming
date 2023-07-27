#include "main.h"

/**
 * string_toupper - changes all lowercase letter to uppercase
 * @str: string to be changed
 * Return: modified string
 */
char *string_toupper(char *str)
{
	char s;
	int i = 0;

	while (str[i] != '\0')
	{
		s = str[i];
		if (s >= 97 && s <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}
