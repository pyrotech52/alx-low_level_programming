#include "lists.h"
/**
 * sum_listint - sums all the data in a linked list
 * @head: pointer
 * Return: 0 if list is empty
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
