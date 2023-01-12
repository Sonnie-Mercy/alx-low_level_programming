#include "lists"

/**
 * free_dlistint - frees a list int list
 * @head: pointer to list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
