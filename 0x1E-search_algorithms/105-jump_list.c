#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted
 * list of integers using the Jump search algorithm
 * @list: first node of the linked list
 * @size: number of elements in the list.
 * @value: the value to search for.
 *
 * Return: the index of the value if found, -1 otherwise.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *tmp;
	size_t step = 0;
	size_t prev = 0;

	if (list == NULL)
		return (NULL);

	tmp = list;
	while (step < size && tmp->next && tmp->n < value)
	{
		prev = step;
		step += sqrt(size);
		for (; tmp->next && tmp->index < step; tmp = tmp->next)
			;
		printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);

	tmp = list;
	for (; tmp && tmp->index < prev; tmp = tmp->next)
		;

	for (; tmp->next && tmp->n < value && prev <= step; tmp = tmp->next, prev++)
	{
		printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);
	}

	if (tmp->n == value)
	{
		printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);
		return (tmp);
	}
	return (NULL);
}
