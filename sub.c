#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int num)
{
	stack_t *aux;
	int sac, nod;

	aux = *head;
	for (nod = 0; aux != NULL; nod++)
		aux = aux->next;
	if (nod < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sac = aux->next->n - aux->n;
	aux->next->n = sac;
	*head = aux->next;
	free(aux);
}
