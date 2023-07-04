#include "lists.h"

/**
*  get_nodeint_at_index - return the nth node of a listint_t linked list.
*  @head: data type pointer for the head/next node in the linked list
*  @index: index of the node starting at 0
*
* Return: head node data n
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp_node = head;
	unsigned int counter = 0;

	for (; tmp_node && counter < index; counter++)
	{
		tmp_node = tmp_node->next;
	}
	return (tmp_node);
}
