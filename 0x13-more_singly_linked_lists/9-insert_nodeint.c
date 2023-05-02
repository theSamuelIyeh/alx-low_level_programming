#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given
 * position in a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @idx: Index where the new node should be added
 * (starting at 0).
 * @n: Value to be stored in the new node.
 *
 * Return: Pointer to the new node, or NULL if the new
 * node could not be inserted.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *current;
unsigned int i;

if (head == NULL)
{
return (NULL);
}

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

current = *head;
for (i = 0; i < idx - 1; i++)
{
if (current == NULL)
{
free(new_node);
return (NULL);
}
current = current->next;
}

new_node->next = current->next;
current->next = new_node;

return (new_node);
}
