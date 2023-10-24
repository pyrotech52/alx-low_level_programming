#include "lists.h"
/**
 * pop_listint-deletes the of a lined list
 * @head: parameter
 * Return: 0 is list is empty
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int count;
if (!head || *head)
return (0);
count = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (count);
}
