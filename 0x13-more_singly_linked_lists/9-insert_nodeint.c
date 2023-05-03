#include "lists.h"

/**
  * insert_nodeint_at_index - it inserts a new node at a
  * given position
  * @head: a head pointer
  * @idx: the index of the list where the new node should be added
  * @n: new data
  * Return: the address of the new node, or NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node1;
	unsigned int f;
	listint_t *temp = *head;

	node1 = malloc(sizeof(listint_t));
	if (!node1 || !head)
		return (NULL);

	node1->n = n;
	node1->next = NULL;

	if (idx == 0)
	{
		node1->next = *head;
		*head = node1;
		return (node1);
	}
	for (f = 0; temp && f < idx; f++)
	{
		if (f == idx - 1)
		{
			node1->next = temp->next;
			temp->next = node1;
			return (node1);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
