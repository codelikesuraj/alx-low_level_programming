#include <stdio.h>
#include "main.h"

int is_separator(char c);

/**
 * cap_string - capitalizes all words of a string
 * @str: string of words to be capitalized
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	char s;
	int i = 0;

	while (str[i] != '\0')
	{
		s = str[i];
		if ((i > 0) && (is_separator(str[i - 1]) == 1) && s >= 97 && s <= 122)
		{
			printf("I am a separator\n");
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/**
 * is_separator - check if charactor is a separator
 * @c: character to be checked
 * Return: 0 if false, 1 if true
 */
int is_separator(char c)
{
	if (
			c == ' ' ||
			c == '\t' ||
			c == '\n' ||
			c == ',' ||
			c == ';' ||
			c == '.' ||
			c == '!' ||
			c == '?' ||
			c == '"' ||
			c == '(' ||
			c == ')' ||
			c == '{' ||
			c == '}'
	   )
		return (1);

	return (0);
}
