#include "search_algos.h"
/**
 * _helper -searches for a value in a sorted array of integers
 * usingthe binary search algorithm
 * using the linear search algorithm.
 * @array: a pointer to the first element of the array.
 * @value: the value to search for.
 * @low: lower bound
 * @high: upper bound
 *
 * Return: the index of the value if found, -1 otherwise.
 */
int _helper(int *array, int value, size_t low, size_t high)
{
    size_t i;
    size_t mid;

    if (low >= high && array[low] == value)
        return (low);

    printf("Searching in array: ");
    for (i = low; i < high; i++)
        printf("%d, ", array[i]);
    printf("%d\n", array[i]);

    if (low >= high)
        return (-1);

    mid = low + (high - low) / 2;

    if (array[mid] == value)
        high = mid;
    else if (array[mid] < value)
        low = mid + 1;
    else
        high = mid - 1;

    return (_helper(array, value, low, high));
}

/**
 * advanced_binary - searches for a value in a sorted array of
 * integers using the advanced binary search algorithm
 * @array: a pointer to the first element of the array.
 * @size: number of elements in the array.
 * @value: the value to search for.
 *
 * Return: the index of the value if found, -1 otherwise.
 */
int advanced_binary(int *array, size_t size, int value)
{
    size_t low = 0;
    size_t high = size - 1;

    if (array == NULL)
        return (-1);

    return (_helper(array, value, low, high));
}
