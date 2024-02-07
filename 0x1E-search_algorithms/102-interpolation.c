#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of
 * integers using the interpolation search algorithm
 * @array: a pointer to the first element of the array.
 * @size: number of elements in the array.
 * @value: the value to search for.
 *
 * Return: the index of the value if found, -1 otherwise.
 */
int interpolation_search(int *array, size_t size, int value)
{
    size_t low = 0, high = size - 1, pos = 0;
    double f;

    if (array == NULL)
        return (-1);

    while (low < high)
    {
        f = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
        pos = (size_t)(low + f);

        printf("Value checked array[%ld]", pos);

        if (pos >= size)
        {
            printf(" is out of range\n");
            break;
        }
        else
            printf(" = [%d]\n", array[pos]);

        if (array[pos] == value)
            return ((int)pos);

        if (array[pos] < value)
            low = pos + 1;
        else
            high = pos - 1;
    }

    return (-1);
}