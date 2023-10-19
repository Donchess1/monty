#include "monty.h"
/**
 * f_div - divides the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_div(stack_t **head, unsigned int num)
{
	stack_t *h;
	int lnt = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		lnt++;
	}
	if (lnt < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", num);
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
	aux = h->next->n / h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
