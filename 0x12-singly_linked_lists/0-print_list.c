#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/*
 * print_list - print all the elements of
 * lis_t
 * @h: A pointer to the list_t list.
 * Return number of nodes
 */

size_t print_list(const list_t *h)
{
    size_t count = 0;
    /*count is representing number of nodes,it should be initialized to zero to avoid printing gabbage value*/

    while (h != NULL)
    /*as long as we haven't reached the end of the list*/
    {
        if (h->str != NULL)
            /*
             * The step above checks if the str member of the current node (h) is NULL.
             * If it is not, it prints the string length of the string (len) and the string (str)
             *  followed by a newline character
             */
            printf("[%d] %s\n", h->len, h->str);
        else /*If it is, it prints the string "[0]" followed by a newline character.*/
            printf("[0] (nil)\n");

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