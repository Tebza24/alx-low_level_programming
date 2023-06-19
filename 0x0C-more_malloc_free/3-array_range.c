#include <stdlib.h>
#include "main.h"

/**
 * *array_range - makes an array of integers
 * @min: minimum number range of valuees stored
 * @max: maximum number range of values stored number of elements
 *
 * Return: pointer to the new array
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
