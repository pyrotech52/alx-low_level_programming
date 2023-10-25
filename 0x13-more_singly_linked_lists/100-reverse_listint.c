#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: double pointer
 * Return: the pointer to the first node
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *previous_node = NULL;
listint_t *current_node = *head;
listint_t *next_node = NULL;

while (current_node != NULL)
{
next_node = current_node->next;
current_node->next = previous_node;
previous_node = current_node;
current_node = next_node;
}
*head = previous_node;
return (previous_node);
}

