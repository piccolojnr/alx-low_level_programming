#include "lists.h"
/**
 * free_listint_safe - frees a list
 * @h: pointer to the list
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	size_t size = 0;

	while (*h != NULL)
	{
		size++;

		free(current);

		if (current <= current->next)
		{
			*h = NULL;
			return (size);
		}

		current = current->next;
	}

	*h = NULL;

	return (size);
}
