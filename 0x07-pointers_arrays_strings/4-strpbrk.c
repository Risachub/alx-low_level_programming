#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: input first occurrence
 * @accept: input of any of the bytes in the string accept
 * Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
