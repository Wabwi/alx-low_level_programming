#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - A function that prints the elementsin a  list
 * @head: A pointer to listint_t structure
 * Return: The number of nodes. Exits with 98 on failure
 */

size_t print_listint_safe(const listint_t *head)

{
	const listint_t *temp = NULL;
	const listint_t *temp2 = NULL;
	int i, count;


	i = 0;
	temp = head;

	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		i++;
		temp = temp->next;
		temp2 = head;
		count = 0;

		while (count < i)
		{

			if (temp == temp2)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (i);
			}
			temp2 = temp2->next;
			count++;
		}

		if (head == NULL)
			exit(98);

	}
	return (i);
}
