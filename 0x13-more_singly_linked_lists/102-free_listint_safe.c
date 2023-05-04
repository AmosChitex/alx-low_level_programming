#include "lists.h"

/**
 * free_listint_safe - (frees a linked list)
 * @h:A pointer to the first node in the linked lisit
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff1;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff1 = *h - (*h)->next;
		if (diff1 > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}