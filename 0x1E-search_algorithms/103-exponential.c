#include "search_algos.h"
/**
 * binary_search_helper -searches for a value in a sorted array of integers
 * usingthe binary search algorithm
 * using the linear search algorithm.
 * @array: a pointer to the first element of the array.
 * @value: the value to search for.
 * @low: lower bound
 * @high: upper bound
 *
 * Return: the index of the value if found, -1 otherwise.
 */
int binary_search_helper(int *array, int value, size_t low, size_t high)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		size_t mid = low + (high - low) / 2;

		printf("Searching in array: ");

		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
/**
 * exponential_search - searches for a value in a sorted array of
 * integers using the exponential search algorithm
 * @array: a pointer to the first element of the array.
 * @size: number of elements in the array.
 * @value: the value to search for.
 *
 * Return: the index of the value if found, -1 otherwise.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound;

	if (array == NULL)
		return (-1);

	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	if (bound + 1 < size)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", bound / 2, bound);
		return (binary_search_helper(array, value, bound / 2, bound + 1));
	}
	else
	{
		printf("Value found between indexes [%ld] and [%ld]\n", bound / 2, size - 1);
		return (binary_search_helper(array, value, bound / 2, size));
	}
}
