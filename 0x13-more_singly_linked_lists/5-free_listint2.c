#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head pointer to NULL.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: Void.
 */
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL || *head == NULL)
{
return;
}

while (*head != NULL)
{
temp = *head;
*head = (*head)->next;
free(temp);
}

*head = NULL;
}
