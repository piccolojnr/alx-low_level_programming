#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: int
 *
 * Return: pointer t new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1 = 0, len2 = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	result = (char *)malloc(len1 + n + 1);
	if (result == NULL)
	{
		exit(98);
	}

	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		result[len1 + i] = s2[i];
	}

	result[len1 + n] = '\0';

	return (result);
}
