#include "lists.h"

/**
*  free_listint2 - Frees a linked list
*  @head: data type pointer to the list to be freed.
*
*  Return: 0 elements all free
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
