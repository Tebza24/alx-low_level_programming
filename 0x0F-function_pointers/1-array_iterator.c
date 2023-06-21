#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints  array elem on a newl
 * @array: array
 * @size: how  elem to print
 * @action: pointer t print in regular or hex
 * Return: voidd
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
