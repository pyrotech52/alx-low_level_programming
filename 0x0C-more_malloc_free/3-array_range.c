#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates of integers
 * @min: parameter
 * @max: parameter
 * Return: new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int x, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		ptr[x] = min++;

	return (ptr);
}
