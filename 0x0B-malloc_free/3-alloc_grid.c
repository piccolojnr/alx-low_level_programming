#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a two dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **array;

	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for ( ; height >= 0; height--)
	{
		array[height] = (int *)malloc(sizeof(int) * width);
		if (array[height] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; i++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
