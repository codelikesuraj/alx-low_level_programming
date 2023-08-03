/**
 * _strchr - locate the first occurence of a charcter in a string
 * @s: string to be checked
 * @c: character to look for
 *
 * Return: pointer to the first occurence or 'NULL' if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int len_s = 0;

	while (s[len_s] != '\0')
		len_s++;

	if (c == '\0' || len_s < 1)
		return ('\0');

	while (1)
	{
		if (c == s[i])
			return (&s[i]);
		i++;
		if (i >= len_s)
			return (&s[len_s]);
	}
}
