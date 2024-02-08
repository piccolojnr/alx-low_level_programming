#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted list of integers
 * using the linear skip search algorithm with a skip list.
 * @list: First node of the linked list
 * @value: The value to search for.
 *
 * Return: The node containing the value if found, NULL otherwise.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tmp, *prev, *go;

	if (list == NULL)
		return (NULL);

	tmp = list;
	prev = NULL;
	go = list;

	while (tmp && tmp->n < value)
	{
		prev = tmp;
		if (tmp->express != NULL)
		{
			tmp = tmp->express;
			printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);
		}
		else
		{
			break;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev->index, tmp->index);

	go = tmp;
	tmp = prev;

	while (tmp && tmp->index <= go->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);

		if (tmp->n == value)
			return (tmp);

		tmp = tmp->next;
	}

	return (NULL);
}
