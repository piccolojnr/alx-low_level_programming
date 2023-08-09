#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments of your
 * @ac: ac
 * @av: av
 *
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *tmp;
	char *strout;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}

	strout = malloc(sizeof(char) * len + 1);

	if (strout == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		tmp = av[i];
		while (*tmp != '\0')
		{
			strout[k] = *tmp;
			tmp++;
			k++;
		}
		strout[k] = '\n';
		k++;
	}

	strout[len] = '\0';

	return (strout);
}
