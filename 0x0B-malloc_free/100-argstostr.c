#include "main.h"
#include "2-str_concat.c"
#include <stdlib.h>

/**
 * argstostr - concatenates all the
 * arguments in a program
 * @ac: number of arguments
 * @av: pointer to array of arguments
 *
 * Return: Each argument followed by a
 * new line or NULL if ac == 0, av ==
 * NULL or if error
 */
char *argstostr(int ac, char **av)
{
	char *concat;
	int i, j, k, l;

	if (ac < 1 || av == NULL)
		return (NULL);

	l = 0;
	for (i = 0; i < ac; i++)
		l += _strlen(av[i]) + 1;

	concat = malloc((l + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		l = _strlen(av[i]);

		for (j = 0; j < l; j++)
			concat[k++] = av[i][j];

		concat[k++] = '\n';
	}
	return (concat);
}
