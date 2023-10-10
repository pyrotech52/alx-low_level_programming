#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes varible
 * @d: date 0
 * @name: data 1
 * @age: data 2
 * @owner:data 3
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}

