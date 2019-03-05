#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments to one string
 * @ac: the argument count
 * @av: the argument array
 *
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = 0;
	char *ret;

	if (ac < 1 || !av)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			l++;
	l += ac + 1;
	ret = malloc(sizeof(char) * l);
	if (!ret)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			ret[k++] = av[i][j];
		ret[k++] = '\n';
	}
	ret[k] = '\0';
	return (ret);
}
