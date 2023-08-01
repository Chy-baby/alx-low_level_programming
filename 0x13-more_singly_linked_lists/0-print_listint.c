#include "list.h"
/**
 * print_listint - prints allthe elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_tnum = 0;
	while(h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
