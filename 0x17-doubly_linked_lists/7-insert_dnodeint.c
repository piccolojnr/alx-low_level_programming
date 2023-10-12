#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *curr = NULL;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	curr = *h;
	for (; idx > 1; idx--)
	{
		if (curr == NULL)
			return (NULL);
		curr = curr->next;
	}

	if (curr->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = curr->next;
	new_node->prev = curr;
	new_node->next->prev = new_node;
	curr->next = new_node;

	return (new_node);
}
