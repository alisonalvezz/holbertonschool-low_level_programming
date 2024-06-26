#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end
 * @head: pointer to a pointer to head
 * @n: value to be stored in new_node
 * Return: adress of the element, null if i failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	dlistint_t **temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}

	else
	{
		temp = head;
		while ((*temp)->next != NULL)
			temp = &(*temp)->next;

		(*temp)->next = new_node;
		new_node->prev = *temp;
	}

	return (new_node);
}
