#include "lists.h"

/**
 * print_list- prints all the elements of a list_t list
 * @h: const list_t
 * Return: the nmber of nodes
 */

size_t print_list(const list_t *h)
{
	if (h == NULL)
	{
		printf("[0] (nil)");
		return (len);
	}
	while (h)
	{
		len++;
		printf("%s", h->str);
		h = h->next;
	}
	return (len);
}
