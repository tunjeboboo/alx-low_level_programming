/* add_node_end.c */
#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * owned by asofeyeje
 * @head: pointer to the head of the list
 * @str: string to add to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;

	if (head == NULL)
		return (NULL);

	/* create new node and copy string */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;

	/* traverse the list to find the last node */
	last_node = *head;
	if (last_node != NULL)
	{
		while (last_node->next != NULL)
			last_node = last_node->next;

		/* link new node to the last node */
		last_node->next = new_node;
	}
	else
	{
		/* list is empty, new node is the head */
		*head = new_node;
	}

	return (new_node);
}
