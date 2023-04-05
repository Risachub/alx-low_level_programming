#include "main.h"

/**
 * _pow_recursion - a fun that returns the value of x raised to the power y
 * @x: value x raised
 * @y: to power
 *
 * Return: value of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
