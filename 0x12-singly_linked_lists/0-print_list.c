#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints out all the elements of a list_t list
 * @h: head of list_t list
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t *ptr;

	if (h != NULL)
	{
		ptr = (list_t *)h;
		while (ptr != NULL)
		{
			count++;
			if (ptr->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%u] %s\n", ptr->len, ptr->str);
			ptr = ptr->next;
		}
	}
	return (count);
}
