#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node of a linked list
 * @head: pointer
 * @index: parameter
 * Return: NULL if node does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int x = 0;
listint_t *temp = head;
while (temp && x < index)
{
temp = temp->next;
x++;
}
return (temp ? temp : NULL);
}
