#include "main.h"
/**
 * _memset - fills memory with a const byte
 * @s: the address of memory to be filled
 * @b: the value
 * @n: the number of bytes of the memory area
 *
 * Return: a pointe to the memory area
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
