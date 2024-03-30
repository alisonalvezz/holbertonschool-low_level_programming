#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a node at the index
 * @h: pointer that points at start of chain
 * @idx: number of the chain
 * @n: number that will carry new_node
 * Return: new node if works, null if fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *prev_node, *next_node;

	unsigned int i;

	dlistint_t *current;

	current = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;
	if (current == NULL && i == idx - 1)
		return (add_dnodeint(h, n));
	if (current == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (current->prev != NULL)
	{
		prev_node = current->prev; /**guardar el nodo previo*/
		prev_node->next = new_node; /**updatear el next del nodo previo*/
	}
	new_node->prev = current->prev;
	if (current->next != NULL)
	{
		next_node = current->next;
		next_node->next = new_node;
	}

	return (new_node);
}
