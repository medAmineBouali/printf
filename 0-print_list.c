#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
* print_list: prints elements of a list.
*
* @h: pointer to the head of the list.
* Return: the number of nodes in the list.
*/
size_t print_list(const list_t *h)
{
	size_t number_of_nodes = 0;
	list_t *current = head;

	while (current != NULL)
	{
		if (str != NULL)
		{
			print("[%d] %s", current -> len, current -> str);
		}
		else
			print("[0] (nil)");
		number_of_nodes++;
		current = current -> next;
	}
	return (number_of_nodes);
}
