#include "lists.h"

size_t looped_listint_len2(const listint_t *head);

/**
 * looped_listint_len2 - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len2(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
			}

			return (nodes);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (0);
}
/**
 * free_listint_safe - frees a list
 * @h: pointer to the list
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	size_t i, size;

	size = looped_listint_len2(*h);

	if (size == 0)
	{
		for (; h != NULL && *h != NULL; size++)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
		}
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
		}
		*h = NULL;
	}

	h = NULL;

	return (size);
}
