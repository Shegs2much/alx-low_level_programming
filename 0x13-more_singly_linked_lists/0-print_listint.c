#include "lists.h"

/**
 * print_listint - will print all the elements of a linked list
 * @h: type listint_t to print linked will be listed shegz
 *
 * Return: the numBer of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
