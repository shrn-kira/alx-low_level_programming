#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: data type pointer to the first node in the list
 *
 * Return: new node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old_node = NULL;
	listint_t *post_node;

	while (head && *head)
	{
		post_node = (*head)->next;
		(*head)->next = old_node;
		old_node = *head;
		*head = post_node;
	}
	*head = old_node;
	return (*head);
}
