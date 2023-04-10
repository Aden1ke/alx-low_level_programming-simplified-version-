#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the first node of the list
 * @index: index of the node to return
 *
 * Return: pointer to the nth node, or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
        /*the code above is to check if the head list is empty(or linked list is empty)*/
	tmp = head;
	while (tmp != NULL && count < index)
	{
		tmp = tmp->next;
		count++;
	}
	if (count != index)
		return (NULL);
	return (tmp);
}

/*NOTE*/
/**
 * you also use a for loop:
 * for (tmp = head; tmp != NULL; tmp = tmp->next)
 * {
 * count++;
 * }
*/
/** 
 *            +---+     +---+     +---+     +---+     +---+
 * head ----> |   |---->|   |---->|   |---->|   |---->|   |----> NULL
 *            +---+     +---+     +---+     +---+     +---+
 *              |         |         |         |         |
 *             n=2       n=4       n=6       n=8      n=10
 * *get_nodeint_at_index(head) is to return the sum of the values in the nodes:
 * *get_nodeint_at_index(head) = 2 , 4 , 6 , 8 ,10 = 5;
 * The function takes a pointer to the first node of a singly linked list as input (head).
 * It initializes a variable count to 0 (count = 0),
 * and a temporary pointer tmp to head(tmp = head).
 * 
 * The while loop iterates over each node in the linked list,counting the number of nodes.
 * e.g        +---+     +---+     +---+     +---+     +---+
 * head ----> |   |---->|   |---->|   |---->|   |---->|   |----> NULL
 *            +---+     +---+     +---+     +---+     +---+
 *              |         |         |         |         |
 *             n=2       n=4       n=6       n=8      n=10
 * count = 0;
 * tmp = head;
 * 
 * While loop:
 * ------------------------
 * Iteration 1:
 * count = ++
 * count = 1;
 * tmp = tmp->next = address of node with n=4
 * 
 * Iteration 2:
 * count = ++
 * count = 2;
 * tmp = tmp->next = address of node with n=6
 * 
 * Iteration 3:
 * count = ++
 * count = 3;
 * tmp = tmp->next = address of node with n=8
 * 
 * Iteration 4:
 * count = ++
 * count = 4;
 * tmp = tmp->next = address of node with n=10
 * 
 * Iteration 5:
 * count = ++
 * count = 6;
 * tmp = tmp->next = NULL
 * 
 * After the loop:
 * ------------------------
 * 
 *  The loop continues until tmp is NULL, indicating that the end of the linked list has been reached.
 * Finally, the function returns the count of all the node values. In the example above,
 *  the linked list has 5 nodes with values 2, 4, 6, 8, and 10, so the function returns a count of 5.
 */