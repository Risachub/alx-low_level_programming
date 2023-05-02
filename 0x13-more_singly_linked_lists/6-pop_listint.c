#include "lists.h"

/**
  * pop_listint - function that deletes the head node
  * of a listint_t linked list.
  * @head: a head pointer
  * Return: the head node’s data (n)
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int delete;

	if (!head || !*head)
		return (0);

	delete = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (delete);
}
