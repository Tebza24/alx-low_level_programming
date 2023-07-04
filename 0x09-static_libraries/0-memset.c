#include "main.h"
/**
 * _memset - memory with a specific value
 * @s: starting of memory to be filled
 * @b: thevalue
 * @n: number ofs to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
