#include "lists.h"

/**
  * get_nodeint_at_index - function that returns
  * @head: head pointer
  * @index: the index of the node, starting at 0
  * Return: the nth node of a listint_t linked list
  * if the node does not exist, return NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nth = 0;
	listint_t *temp = head;

	while (temp && nth < index)
	{
		temp = temp->next;
		nth++;
	}
	return (temp ? temp : NULL);
}
