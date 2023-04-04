#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * listint_len - print the number of nodes.
 * @h:the  head of list.
 * Return: count(number of nodes).
 */
size_t listint_len(const listint_t *h)
{
    size_t count = 0;

    while (h)
    {
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