#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
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
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(90);
	}
	ptr->str = strdup(str);
	ptr->len = i;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
