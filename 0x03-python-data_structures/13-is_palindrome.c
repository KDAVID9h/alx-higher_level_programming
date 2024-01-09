#include <stdlib.h>
#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to the head of the list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *current, *prev, *next, *mid, *last;
	int len, i, half;

	// Check if the list is empty or has one element
	if (head == NULL || *head == NULL || (*head)->next == NULL)
		return (1);

	// Initialize the pointers
	current = *head;
	prev = NULL;
	next = NULL;
	mid = NULL;
	last = NULL;

	// Find the length of the list
	len = 0;
	while (current != NULL)
	{
		len++;
		current = current->next;
	}

	// Find the middle of the list
	half = len / 2;
	current = *head;
	for (i = 0; i < half; i++)
	{
		current = current->next;
	}
	mid = current;

	// Reverse the second half of the list
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	last = prev;

	// Compare the first and second half of the list
	current = *head;
	while (current != NULL && last != NULL)
	{
		// If the values are different, return 0
		if (current->n != last->n)
			return (0);
		current = current->next;
		last = last->next;
	}

	// Reverse the second half of the list back to the original order
	current = prev;
	prev = NULL;
	next = NULL;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	mid->next = prev;

	// Return 1 if the list is a palindrome
	return (1);
}
