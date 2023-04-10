#include "lists.h"
/**
 * pop_listint - delete the first node and return 0.
 *@head: pointer to pointer of the first node.
 * Return:0 (succes).
 */
int pop_listint(listint_t **head)
{
        listint_t *tmp;

        if (*head != NULL)
        {
        tmp = *head;
        *head = tmp->next;
        free(tmp);
        }

        return (0);
}
/**
 * Before function call:
 *         +------+       +------+       +------+       +------+
 *  head-->|  A   |------>|  B   |------>|  C   |------>| NULL |
 *         +------+       +------+       +------+       +------+
 * 
 * tmp = *head;
 *              +------+       +------+       +------+       +------+
 * tmp-->head-->|  A   |------>|  B   |------>|  C   |------>| NULL |
 *              +------+       +------+       +------+       +------+
 *
 *  *head = tmp->next;
 *            +------+       +------+       +------+       +------+
 *  tmp--->   |  A   |------>|  B   |------>|  C   |------>| NULL |
 *            +------+       +------+       +------+       +------+
 *                           |   ^  |
 *                               |
 *   head------------------------|
 * free(tmp);
 * 
 * tmp = *head;
 * In the graphical explanation, we start with a linked list with three nodes (A, B, and C) pointed to by head.
 *  During the function call, tmp is set to A, and head is updated to point to B. 
 * The memory for node A is freed. 
 * After the function call, the linked list now starts with node B.
 * After function call:
 *                +------+       +------+       +------+
 *  tmp--> head-->|  B   |------>|  C   |------>| NULL |
 *                +------+       +------+       +------+
 *            
 *               +------+       +------+       +------+
 *        tmp--->|  B   |------>|  C   |------>| NULL |
 *               +------+       +------+       +------+      
 *                              |   ^  |
 *                                  |
 *      head------------------------|    
 * free(tmp);
 * and so on...






*/
/** Declare pointer to store the address of the node to be deleted
 * (listint_t *tmp;  )
 * Check if list is empty
 * Store the address of the first node in the tmp variable
 * Free the memory allocated to the first node
 * 
 * pdate the head pointer to point to the second
    *node (or NULL if list only had one node)
    */

/*
As you can see, the main difference between the two implementations is that the first implementation stores the value of the deleted node in a variable called value, while the second implementation does not. Instead, the second implementation simply returns a fixed value of 0.

The first implementation can be useful if you need to retrieve the value stored in the deleted node. For example, if the list represents a stack of integers, you may want to retrieve the top element before deleting it. The second implementation, on the other hand, is simpler and more efficient if you do not need to retrieve the value of the deleted node.
*/
