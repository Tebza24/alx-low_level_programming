#include "main.h"
/**
 * _strlen_recursion - return length of string.
 * @i: string to be measured.
 *
 * Return: a length of the string.
 */
int _strlen_recursion(char *i)
{
	int longit = 0;

	if (*i)
	{
		longit++;
		longit += _strlen_recursion(i + 1);
	}

	return (longit);
}
