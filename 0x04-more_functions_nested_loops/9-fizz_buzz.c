#include <stdio.h>

/**
  *main - print te numberfrom 1 to 100
  *but for multiples of 3 prints fizz instead
  *And for the multiples of 5 prints buzz
  *Return: always 0 (success)
  */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" FIZZ");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" BUZZ");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FIZZBUZZ");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
