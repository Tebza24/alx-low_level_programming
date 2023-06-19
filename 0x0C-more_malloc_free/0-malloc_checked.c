#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - collects memory using malloc
 * @b: number of bytes to collect
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
