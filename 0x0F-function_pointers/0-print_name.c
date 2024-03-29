#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - printpointer to function
 * @name: string  add
 * @f: pointer  function
 * Return: nohing
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
