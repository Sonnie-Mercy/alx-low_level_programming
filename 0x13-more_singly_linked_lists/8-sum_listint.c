#include "lists.h"

/**
 * sum_listint - returns the sum of all elements in a listint_t
 * @head: pointer to start of the list
 * Return: 0 if empty
 *	else the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
