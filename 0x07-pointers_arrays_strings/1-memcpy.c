#include "main.h"
/**
 *_memcpy - a function that copies byte from memory area
 *@dest: bytes are stored in this memeory
 *@src: bytes are copied from this memory
 *@n: number of bytes
 *
 *Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
