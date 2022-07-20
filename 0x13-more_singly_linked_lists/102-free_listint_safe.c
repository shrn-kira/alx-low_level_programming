#include "lists.h"

/**
 * free_listint_safe - frees a linked list safely
 * @h: data type pointer to the first node in the linked list.
 *
 * Return: the size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *safe_node = *h;
	listint_t *tmp_node;

	if (!h)
		return (0);
	while (safe_node != NULL)
	{
		counter++;
		tmp_node = safe_node;
		safe_node = safe_node->next;
		free(tmp_node);

		if (tmp_node < safe_node)
			break;
	}
	*h = NULL;
	return (counter);
}
