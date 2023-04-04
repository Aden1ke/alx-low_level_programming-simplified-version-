#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint - print the number of nodes.
 * @h:the  head of list.
 * Return: count(number of nodes).
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
        /*
         * The step moves h to point to the next node in the list (h->next)
         * and increments count by 1
         */
	}

	return (count);
/*
     * the function returns the total number of nodes in the list, which is stored in count
     */
}

/*
 * NOTE:
 * size_t is a data type in C that is used to represent the size of an object in bytes.
 * It is commonly used to represent the sizes of arrays and other memory allocations,
 * as well as the lengths of data structures.
 * Therefore, using size_t as the return type for such functions ensures that the return value is both accurate
 * and portable across different platforms and compilers.
 */