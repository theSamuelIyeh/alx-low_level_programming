#include "lists.h"

/**
 * list_len - returns number of nodes ina a linked list
 * @h: head of linked list passed in
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	list_t *ptr;

	if (h != NULL)
	{
		ptr = (list_t *)h;
		while (ptr != NULL)
		{
			count++;
			ptr = ptr->next;
		}
	}
	return (count);
}
