#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: pointer to the 1st node of the linked list to be freed
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
