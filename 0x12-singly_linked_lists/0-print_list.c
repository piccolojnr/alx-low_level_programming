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
	size_t nelem;
	list_t *list = (list_t *)h;

	nelem = 0;
	while (list != NULL)
	{
		if (list->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", list->len, list->str);
		list = list->next;
		nelem++;
	}

	return (nelem);
}
