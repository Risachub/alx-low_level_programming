#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * list_len - function that returns the number of  * elements in a linked list.
 * @h: head pointer to the list
 * Return: the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
