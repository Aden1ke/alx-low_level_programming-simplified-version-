#include "lists.h"
/**
 * sum_listint - sum up all the nodes and return final answer.
 * @head: pointer to the first no
 * Return: pointer to the nth node, or NULL if it doesn't exist
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	if (head == NULL)
		return (sum);
	tmp = head;
	while (tmp != NULL)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
/*NOTE*/
/**
 * you also use a for loop:
 * for (tmp = head; tmp != NULL; tmp = tmp->next)
 * {
 * sum = sum + tmp->n;
 * }
*/
/** 
 *            +---+     +---+     +---+     +---+     +---+
 * head ----> |   |---->|   |---->|   |---->|   |---->|   |----> NULL
 *            +---+     +---+     +---+     +---+     +---+
 *              |         |         |         |         |
 *             n=2       n=4       n=6       n=8      n=10
 * sum_listint(head) is to return the sum of the values in the nodes:
 * sum_listint(head) = 2 + 4 + 6 + 8 + 10 = 30
 * The function takes a pointer to the first node of a singly linked list as input (head).
 * It initializes a variable sum to 0 (sum = 0),
 * and a temporary pointer tmp to head(tmp = head).
 * 
 * The while loop iterates over each node in the linked list, adding the value of the n member of each node to the sum variable(by sum = sum + tmp->n),
 * e.g        +---+     +---+     +---+     +---+     +---+
 * head ----> |   |---->|   |---->|   |---->|   |---->|   |----> NULL
 *            +---+     +---+     +---+     +---+     +---+
 *              |         |         |         |         |
 *             n=2       n=4       n=6       n=8      n=10
 * sum = 0;
 * tmp = head;
 * 
 * While loop:
 * ------------------------
 * Iteration 1:
 * sum = sum + tmp->n = 0 + 2 = 2
 * tmp = tmp->next = address of node with n=4
 * 
 * Iteration 2:
 * sum = sum + tmp->n = 2 + 4 = 6
 * tmp = tmp->next = address of node with n=6
 * 
 * Iteration 3:
 * sum = sum + tmp->n = 6 + 6 = 12
 * tmp = tmp->next = address of node with n=8
 * 
 * Iteration 4:
 * sum = sum + tmp->n = 12 + 8 = 20
 * tmp = tmp->next = address of node with n=10
 * 
 * Iteration 5:
 * sum = sum + tmp->n = 20 + 10 = 30
 * tmp = tmp->next = NULL
 * 
 * After the loop:
 * ------------------------
 * 
 *  The loop continues until tmp is NULL, indicating that the end of the linked list has been reached.
 * Finally, the function returns the sum of all the node values. In the example above,
 *  the linked list has 5 nodes with values 2, 4, 6, 8, and 10, so the function returns a sum of 30.
 */