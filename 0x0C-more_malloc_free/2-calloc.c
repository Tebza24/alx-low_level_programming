#include "main.h"
#include <stdlib.h>

/**
 * *_memset - stores memeory in bytes
 * @s: memory area filled
 * @b: ccharr with copy
 * @n: amount of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - organizes memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer at alloocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
