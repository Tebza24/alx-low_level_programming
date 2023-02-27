#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: Pointer to a string to be printed.
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len])
		len++;

	for (i = len - 1; i >= 0; i--)
		putchar(s[i]);

	putchar('\n');
}
