#include "list.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @h: pointer to the first element in the linked list
 *
 * Return: the deleted data that was inside the elements,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **h)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return(0);
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
