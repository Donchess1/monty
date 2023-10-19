#include "monty.h"
/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_mod(stack_t **head, unsigned int num)
{
	stack_t *h;
	int lnt = 0, auxi;

	h = *head;
	while (h)
	{
		h = h->next;
		lnt++;
	}
	if (lnt < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", num);
		fclose(leks.file);
		free(leks.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", num);
		fclose(leks.file);
		free(leks.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auxi = h->next->n % h->n;
	h->next->n = auxi;
	*head = h->next;
	free(h);
}
