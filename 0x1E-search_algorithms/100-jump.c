#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: a pointer to the first element of the array.
 * @size: number of elements in the array.
 * @value: the value to search for.
 *
 * Return: the index of the value if found, -1 otherwise.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = 0;
	size_t prev = 0;

	if (array == NULL)
		return (-1);

	while (step < size && array[step] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(size);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);

	while (array[prev] < value && prev <= step)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;
	}

	if (array[prev] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		return (prev);
	}
	return (-1);
}
