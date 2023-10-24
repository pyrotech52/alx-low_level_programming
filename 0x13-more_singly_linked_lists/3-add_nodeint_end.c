#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: pointer
 * @n: parameter
 * Return: new address of element else NULL
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *t = *head;
new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
while (t->next)
t = t->next;
t->next = new_node;
return (new_node);
}
