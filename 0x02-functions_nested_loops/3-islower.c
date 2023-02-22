#include "main.h"

/**
  * _islower - displays 1 if input is a
  * lowercase charctor. another case, displays
  * 0
  *
  * @c: The charcator in ASCII code
  *
  * Return:1 for lowrcse charactor. 0 for the rest
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
