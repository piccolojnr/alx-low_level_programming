#include "main.h"
#include <stdlib.h>
/**
 * _calloc - alocates memory for an array using malloc
 * @nmemb: number of members
 * @size: size of elements
 *
 * Return: pointer to the allocated array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, total_size;
	void *ptr;
	char *char_ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;

	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		exit(98);
	}

	char_ptr = (char *)ptr;
	for (i = 0; i < total_size; i++)
	{
		char_ptr[i] = 0;
	}

	return (ptr);
}
