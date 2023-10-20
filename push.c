#include "monty.h"
/**
 * f_push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_push(stack_t **head, unsigned int num)
{
	int b,  a = 0, flag = 0;

	if (leks.arg)
	{
		if (leks.arg[0] == '-')
			a++;
		for (; leks.arg[a] != '\0'; a++)
		{
			if (leks.arg[a] > 57 || leks.arg[a] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", num);
			fclose(leks.file);
			free(leks.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", num);
		fclose(leks.file);
		free(leks.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	b = atoi(leks.arg);
	if (leks.lifi == 0)
		addnode(head, b);
	else
		addqueue(head, b);
}
