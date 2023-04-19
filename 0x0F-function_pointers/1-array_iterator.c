#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a fun on each elem
 * @array: array
 * @size: size of the array
 * @action:  pointer to the function you need to use
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
