#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node
 * @idx: index of the list where the new node should be added
 * @n: data to be added
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current = *head;
	unsigned int i;


	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = current;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; i < idx && current; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		else
			return (NULL);
	}

	return (NULL);
}
