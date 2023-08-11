#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: ptr
 * @old_size: old_Size
 * @new_size: new_size
 *
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i, copy_size;
	char *char_ptr, *new_char_ptr;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		exit(98);
	}

	copy_size = (old_size < new_size) ? old_size : new_size;
	char_ptr = (char *)ptr;
	new_char_ptr = (char *)new_ptr;

	for (i = 0; i < copy_size; i++)
	{
		new_char_ptr[i] = char_ptr[i];
	}

	free(ptr);

	return (new_ptr);
}
