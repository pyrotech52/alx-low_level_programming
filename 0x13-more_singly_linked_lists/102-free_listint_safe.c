#include "lists.h"

/**
 * free_listint_safe - frees a fuction with a loop
 * @h: pointer
 * Return: the size of the freed link
*/
size_t free_listint_safe(listint_t **h)
{
size_t num_freed = 0;
int address_diff;
listint_t *temp;
if (!h || !*h)
return (0);
while (*h)
{
address_diff = (int)(*h) - (int)(*h)->next;
if (address_diff > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
num_freed++;
}
else
{
free(*h);
*h = NULL;
num_freed++;
break;
}
}
*h = NULL;
return (num_freed);
}
