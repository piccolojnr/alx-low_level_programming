#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of
 * @head: pointer to the first node
 *
 * Return: sum of all the data (n) of
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (0);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
