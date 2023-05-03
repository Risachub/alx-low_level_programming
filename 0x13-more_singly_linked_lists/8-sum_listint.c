#include "lists.h"

/**
  * sum_listint - a function that returns the sum of all data
  * in a listint_t linked list.
  * @head: a head pointer to a linked list
  * Return: sum of all the data (n)
  */
int sum_listint(listint_t *head)
{
	int sumall = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sumall += temp->n;
		temp = temp->next;
	}
	return (sumall);
}
