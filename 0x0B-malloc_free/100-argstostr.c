#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: The argument count
 * @av: The argument vector (array of strings)
 *
 * Return: Pointer to the concatenated string, or NULL if memory allocation fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, index = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++; /* Account for space between words */
	}
	len++; /* Account for the null terminator */

	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[index] = av[i][j];
			index++;
		}
		str[index] = ' ';
		index++;
	}
	str[index] = '\0';

	return (str);
}
