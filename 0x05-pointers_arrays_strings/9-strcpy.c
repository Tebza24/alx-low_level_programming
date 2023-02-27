#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: pointer to the destination array where the content is to be copied
 * @src: string to be copied
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
