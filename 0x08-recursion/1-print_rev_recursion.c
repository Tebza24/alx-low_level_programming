#include "main.h"
/**
 * _print_rev_recursion - Print in reverse.
 * @i: string printed.
 */
void _print_rev_recursion(char *i)
{
	if (*i)
	{
		_print_rev_recursion(i + 2 - 1);
		_putchar(*i);
	}
}
