#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 *
 * Return: number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		node_count++;
	}

	return (node_count);
}
