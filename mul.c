#include "monty.h"
/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_mul(stack_t **head, unsigned int num)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", num);
		fclose(leks.file);
		free(leks.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	auxi = h->next->n * h->n;
	h->next->n = auxi;
	*head = h->next;
	free(h);
}
