#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * @size: size of the array
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *ar;

	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(c) * size);

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}

	if (ar)
		return (ar);
	else
		return (NULL);
}
