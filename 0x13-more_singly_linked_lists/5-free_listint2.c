#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next_node;

	if (head == NULL)
		return;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}

	*head = NULL;
}
