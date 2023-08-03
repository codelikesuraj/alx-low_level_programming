/**
 * _strchr - locate the first occurence of a charcter in a string
 * @s: string to be checked
 * @c: character to look for
 *
 * Return: pointer to the first occurence or 'NULL' if not found
 */
char *_strchr(char *s, char c)
{
	int i, l = 0;

	while(s[l] != '\0')
		l++;

	for (i = 0; i < l; i++)
	{
		if (c == s[i])
			return (&s[i]);
	}
	return (&s[l]);
}
