#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_node - add new node to a list_t list
 * @head: pointer to pointer to node
 * @str: data for new node
 * Return: address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *ptr;

	for (i = 0; str[i] != '\0'; i++)
		;
	if (head == NULL)
	{
		ptr = malloc(sizeof(list_t));
		head = &ptr;
		ptr->str = strdup(str);
		ptr->len = i;
		ptr->next = NULL;
		return (ptr);
	}
	ptr = malloc(sizeof(list_t));
	ptr->str = strdup(str);
	ptr->len = i;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
