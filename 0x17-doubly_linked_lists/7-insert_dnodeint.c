#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to head node pointer
 * @idx: index where node is to be inserted
 * @n: data to be inserted
 *
 * Return: address of new node on success NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *next, *current;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *h;
		while (i < idx - 1 && current != NULL)
			current = current->next;
		if (current == NULL)
			return (NULL);
		i++;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		new->prev = current;
		next = current->next;
		current->next = new;
	}
	new->next = next;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
