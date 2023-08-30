#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of the list
 * @index: index of the new node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *next;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		next = current->next;
		free(*head);
		*head = next;
		return (1);
	}

	for (current = *head, i = 0; current &&
	     i < index - 1; current = current->next, i++)
	{
		if (current->next == NULL)
			return (-1);
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	next = current->next;
	current->next = next->next;
	free(next);

	return (1);
}
