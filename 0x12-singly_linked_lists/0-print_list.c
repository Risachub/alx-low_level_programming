#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - a fun that prints all the elements of a list
 * @h: a head pointer to the list_t
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t str = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		str++;
	}

	return (str);
}
