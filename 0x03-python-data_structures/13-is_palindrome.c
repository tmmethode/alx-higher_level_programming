#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * is_palindrome - checks if a singly linked list is palindrome
 * @head: the head of singly linked list
 *
 * Return: 0 if it is not a palindrome, 1 else
 */
int is_palindrome(listint_t **head)
{
	listint_t *start = NULL, *end = NULL;
	unsigned int i = 0, len = 0, len_cyc = 0, len_list = 0;
	
	if (head == NULL)
		return (0);
	
	if (*head == NULL)
		return (1);

	start = *head;
	len = listint_len(start);
	len_cyc = len * 2;
	len_list = len_cyc - 2;
	end = *head;

	for (; i < len_cyc; i = i + 2)
	{
		if (start[i].n != end[len_list].n)
			return (0);

		len_list = len_list - 2;
	}

	return (1);
}

/**
 * get_nodeint_at_index - gets a node from a linked list
 * @head: the head of the linkedlist
 * @index: the index to find in the linkedd list
 *
 * Return: the soecific node of the linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int iter_times = 0;

	if (head)
	{
		while (current != NULL)
		{
			if (iter_times == index)
				return (current);

			current = current->next;
			++iter_times;
		}
	}

	return (NULL);
}

/**
 * slistint_len - counts the number ofd elements in the linked list
 * @h: the linked list to count
 *
 * Return: Number of elements in the linked list
 */

size_t listint_len(const listint_t *n)
{
	int length = 0;

	while (h != NULL)
	{
		++length;
		h = h->next;
	}

	return (length);
}
