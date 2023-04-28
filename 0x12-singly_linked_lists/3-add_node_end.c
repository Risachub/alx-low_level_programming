#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t
 * @str: string to be added
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	end = malloc(sizeof(list_t));
	if (!end)
		return (NULL);

	end->str = strdup(str);
	end->len = len;
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
		return (end);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = end;

	return (end);
}
