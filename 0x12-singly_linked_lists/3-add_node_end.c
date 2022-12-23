#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - add new node at the end of list
 * @head: pointer to pointer to list
 * @str: data of node
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *ptr;
	list_t *new;

	while (str[i] != '\0')
		i++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		exit(90);
	}
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	return (new);
}
