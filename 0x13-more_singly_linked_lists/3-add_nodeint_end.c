#include "lists.h"

/**
 * add_nodeint_end - Inserts a new node at the end of a linked list.
 * @head: Pointer to the head of the linked list.
 * @n: Data to be inserted in the new node.
 *
 * Return: Pointer to the new node, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp;

	if (!new_node)
	return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}

	temp = *head;

	while (temp->next)
	temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
