#include "main.h"
/**
 * _memset - fills memory with a constatnt byte.
 * @s: string
 * @b: constant byte
 * @n: memory area.
 *
 * Return: memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
