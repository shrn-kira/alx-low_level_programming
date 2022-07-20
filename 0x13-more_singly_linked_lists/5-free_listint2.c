#include "lists.h"

/**
*  free_listint2 - Frees a linked list
*  @head: data type pointer to the list to be freed.
*
*  Return: 0 elements all free
*/
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}
	head = NULL;
}
