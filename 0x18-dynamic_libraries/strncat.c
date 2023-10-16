#include "main.h"
/**
 * _strncat - Concatenates two strings
 * @dest: The destination value
 * @src: The source value
 * @n: The limit of the concatenation
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n && *(src + count2) != '\0')
	{
		*(dest + count) = *(src + count2);

		count++;
		count2++;
	}

	*(dest + count) = '\0';

	return (dest);
}
