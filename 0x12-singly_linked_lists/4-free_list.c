#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees list_t list
 * @head: head of list to be freed
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = ptr->next;
		free(ptr);
	}
}
