#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 *
 * Return: poiter to the newly created array
 */
int *array_range(int min, int max)
{
	int i, *arr, num_elements;

	if (min > max)
	{
		return (NULL);
	}

	num_elements = max - min + 1;

	arr = (int *)malloc(num_elements * sizeof(int));
	if (arr == NULL)
	{
		exit(98);
	}

	for (i = 0; i < num_elements; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
