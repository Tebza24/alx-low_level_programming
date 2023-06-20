#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of given size and initializes it with a character
 * @size: The size of the array
 * @c: The character to assign
 *
 * Return: Pointer to the created array, or NULL if size is 0 or memory allocation fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
