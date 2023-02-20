#include <stdio.h>
/**
  *main - Entry point
  *Discription: 'Print number of base of 16'
  *Return: Alwayse 0
  */
int main(void)
{
	int n;
	int i;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
