#include "lists.h"
/**
 * add_nodeint - adds new node at the beginning of a listint_t list
 * @head: pointer to the first node
 * @n: data to be added
 *
 * Return: address of the new element or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
