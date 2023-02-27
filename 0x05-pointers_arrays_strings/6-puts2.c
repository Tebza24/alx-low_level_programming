#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first
 *         character, followed by a new line.
 *
 * @str: Pointer to the string to print.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
