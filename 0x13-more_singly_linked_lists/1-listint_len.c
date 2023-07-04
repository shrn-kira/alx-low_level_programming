#include "lists.h"

/**
* listint_len - returns the number of element in a linked lists
* @h: data type pointer of struct
*
* Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;
	const listint_t	 *new_node = h;

	for (; new_node; new_node = new_node->next)
		i++;
	return (i);
}
