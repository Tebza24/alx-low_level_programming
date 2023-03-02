#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 *
 * Return: void
 */
void pri:nt_number(int n)
{
	int digit, copy, size = 1;

	if (n < 0)

	{
	putchar('-');
	n = -n;
	}

	copy = n;

	while (copy / 10)
	{
		size *= 10;
		copy /= 10;
	}

	while (size)
	{
		digit = n / size;
		putchar(digit + '0');
		n %= size;
		size /= 10;
	}
}
