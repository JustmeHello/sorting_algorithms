#include "sort.h"
#include <stdio.h>

/**
 * cocktail_sort_list - Sorts a doubly linked list of integers
 * in ascending order using the Cocktail shaker sort algorithm.
 * @list: Double pointer to the head of the list
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *temp;
	int swapped;
	if (list == NULL || *list ==NULL)
		return;
	do
	{
		swapped = 0;
		for (temp = *list; temp->next != NULL; temp = temp->next)
		{
			if(temp->n > temp->next->n)
			{
				swap_nodes(list, temp, temp->next);
				swapped = 1;
				print_list(*list);
			}
		}
		if(!swapped)
			break;
		swapped = 0;
		for (; temp->prev != NULL; temp = temp->temp)
		{
			if(temp->n < temp->prev->n)
			{
				swap_nodes(list, temp->prev, temp);
				swapped = 1;
				print_list(*list);
			}
		}
	} while (swapped);
}

/**
 * swap_nodes - Swaps two nodes in a doubly linked list
 * @list: Double pointer to the head of the list
 * @node1: First node to be swapped
 * @node2: Second node to be swapped
 */
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (node1->prev != NULL)
		node1->prev->next = node2;
	if (node2->next != NULL)
		node2->next->prev = node1:
	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->prev = node1;

	if (node1 == *list)
		*list = node2;
}
