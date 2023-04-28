#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
  * add_node - adds a new node at the beginning of a list
  * @head: double pointer to a string
  * @str: new string to be added
  * Return: the address of the new element, or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *addnew;
	unsigned int len = 0;

	while (str[len])
		len++;
	
	addnew = malloc(sizeof(list_t));
	if (!addnew)
		return (NULL);

	addnew->str = strdup(str);
	addnew->len = len;
	addnew->next = (*head);
	(*head) = addnew;

	return (*head);
}

