#include "monty.h"
/**
 * f_push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_push(stack_t **head, unsigned int num)
{
	int a, b = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			b++;
		for (; bus.arg[b] != '\0'; b++)
		{
			if (bus.arg[b] > 57 || bus.arg[b] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", num);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
<<<<<<< HEAD
			exit(EXIT_FAILURE);
		}
	}
	else
	{ 
		fprintf(stderr, "L%d: usage: push integer\n", num;
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); 
	}
	a = atoi(bus.arg);
=======
			exit(EXIT_FAILURE); 
		}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(bus.arg);
>>>>>>> 429f983d75f0cef9a3b97ec3d8ccbc0c21592e93
	if (bus.lifi == 0)
		addnode(head, a);
	else
		addqueue(head, a);
}
