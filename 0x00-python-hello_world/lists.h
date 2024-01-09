#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/* Structure for singly-linked list */
typedef struct listint_s {
	int n;
	struct listint_s *next;
} listint_t;

/* Function prototype for cycle detection */
int check_cycle(listint_t *list);

#endif /* LISTS_H */
