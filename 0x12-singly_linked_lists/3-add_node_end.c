#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds a new node at the end
 * @head: head of the linked list
 * @str: string to store in the list
 *
 * Return: address of the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(new->str);

	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		current->next = new;
	}

	return (new);
}
