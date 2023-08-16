#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @size: the number of elements in an array
 * @cmp: pointer to a function to be used to compare values
 * @array: array of elements to search
 *
 * Return:  index of the first element for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (size <= 0 || array == NULL || cmp == NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {
        if (cmp(array[i]) != 0)
            return (i);
    }

    return (-1);
}
