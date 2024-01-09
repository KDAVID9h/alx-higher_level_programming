#ifndef LISTS_H
#define LISTS_H

/* Structure for singly-linked list */
typedef struct listint_s {
	int n;
	struct listint_s *next;
} listint_t;

/* Function prototypes */
void switch_values(int *a, int *b);
int is_palindrome(listint_t **head);

#endif /* LISTS_H */
