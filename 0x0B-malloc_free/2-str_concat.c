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
	unsigned int i, j, k, limit;

	for (i = 0; s1[i] != '\0'; i++)
		strout = (char *)malloc(sizeof(char) * i);

	for (j = 0; s2[j] != '\0'; j++)
		strout = (char *)malloc(sizeof(char) * j);

	for (k = 0; k < i; k++)
		strout[k] = s1[k];

	for (limit = 0; limit < j; limit++)
		strout[k++] = s2[limit];

	strout[k] = '\0';

	return (strout);
}
