#include "main.h"
/**
 * _strspn ;- gets the length of a prefix string
 * @s: string
 * @accept: accept
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	int found;

	char *a;

	while (*s != '\0')
	{
		found = 0;

		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
				found = 1;
		}

		if (!found)
			break;

		len++;
		s++;
	}

	return (len);
}
