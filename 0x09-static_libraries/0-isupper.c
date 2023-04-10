#include "main.h"

/**
  * _isupper - check if a letter is upper
  *@c: The number to be checked
  *Return: 1 for upper later or zero for anyone else
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
