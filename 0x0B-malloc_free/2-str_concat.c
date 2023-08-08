#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	strout = malloc(sizeof(char) * (i + j + 1));

	if (strout == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		strout[k] = s1[k];

	for (k = 0; k < j; k++)
		strout[k + i] = s2[k];

	strout[i + j] = '\0';

	return (strout);
}
