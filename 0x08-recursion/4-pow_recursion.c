#include "main.h"

/**
 * _pow_recursion - return value of y raise to power of x
 * @y: raised value
 * @x: power
 *
 * Return: result of the power
 */
int _pow_recursion(int y, int x)
{
	if (x < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (y * _pow_recursion(y, x - 1));
}
