#include <stdio.h>
/**
  *main - Entry point
  *Return: always 0 (success)
  */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byts(s)\n", sizeof(int));
	printf("Size of long int: %ld byts(s)\n", sizeof(long int));
	printf("Size of long long int: %ld byts(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byts(s)\n", sizeof(float));
	return (0);
}
