#include "lists.h"
/**
 * list_len - returns then number of elements in a list.
 * @h: singly linked list.
 *
 * Return: number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t nelem;
	list_t *list = (list_t *)h;

	nelem = 0;
	while (list != NULL)
	{
		list = list->next;
		nelem++;
	}

	return (nelem);
}
