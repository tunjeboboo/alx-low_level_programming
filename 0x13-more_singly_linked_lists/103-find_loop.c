#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 * owned by asofeyeje
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pig, *hen;

	pig = hen = head;
	while (pig && hen && hen->next)
	{
		pig = pig->next;
		hen = hen->next->next;
		if (pig == hen)
		{
			pig = head;
			break;
		}
	}
	if (!pig || !hen || !hen->next)
		return (NULL);
	while (pig != hen)
	{
		pig = pig->next;
		hen = hen->next;
	}
	return (hen);
}
