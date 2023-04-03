#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * print_list - print all the elements of
 * lis_t
 * @h: A pointer to the list_t list.
 * Return number of nodes
 */
size_t list_len(const list_t *h)
{
 size_t count = 0;
 while (h)
 {
    h = h -> next;
    count++;
 }
 return(count);
}