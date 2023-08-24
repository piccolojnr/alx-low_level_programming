#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node at the beginning
 * @head: head of the linked list
 * @str: string to store in the list
 *
 * Return: address of the head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
