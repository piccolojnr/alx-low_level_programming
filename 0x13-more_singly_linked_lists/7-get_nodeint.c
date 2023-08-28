#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the desired node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;


	for (current = head, i = 0; current && i < index; current = current->next, i++);


	if (i == index)
		return (current);
	else
		return (NULL);
}
