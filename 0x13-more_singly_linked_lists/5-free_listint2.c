#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: double pointer to head of list
 *
 * Return: void
 */
/** It takes a double pointer to the head of a linked list as an argument.
 *  This means that we can modify the head pointer itself inside the function.*/
void free_listint2(listint_t **head)
{
    listint_t *current, *tmp;

    if (head == NULL || *head == NULL)
        return;
/**
 * The two lines above declare two pointers to listint_t structs,
 *  and check if the head pointer or the list itself is NULL.
 *  If either is NULL, the function simply returns without doing anything.
*/

    current = *head;
    while (current != NULL)
    {
        tmp = current;
        current = current->next;
        free(tmp);
    }
    *head = NULL;
}
/**
 *            +---+     +---+     +---+     +---+     +---+
 * head ----> |   |---->|   |---->|   |---->|   |---->|   |----> NULL
 *            +---+     +---+     +---+     +---+     +---+
 *              |         |         |         |         |
 *             n=2       n=4       n=6       n=8      n=10
 * 
 * free_listint2(&head);
 * ------------------------
 * Iteration 1:
 * tmp = current = *head = address of node with n=2
 * current = current->next = address of node with n=4
 * free(tmp) deallocates node with n=2
 * 
 * Iteration 2:
 * tmp = current = address of node with n=4
 * current = current->next = address of node with n=6
 * free(tmp) deallocates node with n=4
 * 
 * Iteration 3:
 * tmp = current = address of node with n=6
 * current = current->next = address of node with n=8
 * free(tmp) deallocates node with n=6
 * 
 * Iteration 4:
 * tmp = current = address of node with n=8
 * current = current->next = address of node with n=10
 * free(tmp) deallocates node with n=8
 * Iteration 5:
 * tmp = current = address of node with n=10
 * current = current->next = NULL
 * free(tmp) deallocates node with n=10
 * 
 * After the loop:
 * ------------------------
 * head = NULL
 * After all nodes have been deallocated, the function sets *head to NULL, indicating that the linked list is now empty.
*/
