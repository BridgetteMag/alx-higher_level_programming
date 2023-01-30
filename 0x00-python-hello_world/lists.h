<<<<<<< HEAD
fndef LISTS_H
=======
#ifndef LISTS_H
>>>>>>> 19a042a20c20d2956e437c8335a3dd91a1461455
#define LISTS_H

#include <stdlib.h>


typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */
