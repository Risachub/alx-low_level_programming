#include "main.h"

/**
  * binary_to_uint -  a function that converts a binary
  * number to an unsigned int
  * @b: is pointing to a string of 0 and 1 chars
  * Return: the converted number, or 0
  */
unsigned int binary_to_uint(const char *b)
{
	int f;
	unsigned int outcome = 0;

	if (!b)
		return (0);
	for (f = 0; b[f]; f++)
	{
		if (b[f] < '0' || b[f] > '1')
			return (0);
		outcome = 2 * outcome + (b[f] - '0');
	}
	return (outcome);
}
