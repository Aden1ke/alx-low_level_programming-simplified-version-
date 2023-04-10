#include "lists.h"
/**
 * *add_nodeint - add a new node at the beginning of a listint_t list.
 *@n: integers in the node.
 *@head: pointer to pointer of the first node.
 * Return: the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
    	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
    	*head = new_node;
   	return (*head);
}
/*NOTE*/
/**
 * Iteration 1
 * new_node->n = 4;
 * new_node->next = *head;
 * step 1 :  
 *                    +---+
 *         head ----> |   |----> NULL
 *                    +---+
 *                      |  
 *                     n=2 
 * step 2:
 * new_node->n = n(n=4)(adding the value of the new_node)
 *                +---+
 * new_node ----> |   |
 *                +---+
 *                  |  
 *                 n=4
 * step 3:
 * new_node->next = *head;(explanation:address inside head is stored into new node next )
 *                           +---+
 *                head ----> |   |  ----> NULL
 *             |   ^  |      +---+
 *                 |           |  
 *                 |          n=2 
 *                 |
 *                 |
 * new_node->next--|  
 *   
 * *head =new_node(address of new_node is stored into head)
 *            +---+     +---+
 * head ----> |   |---->|   |   ----> NULL
 *            +---+     +---+
 *              |         |  
 *             n=4       n=2 
 * 
 * 
 * 
 * Iteration 2:
 * new_node->n = 6;
 * new_node->next = *head;
 * step 1 :  
 *            +---+     +---+
 * head ----> |   |---->|   |   ----> NULL
 *            +---+     +---+
 *              |         |  
 *             n=4       n=2 
 * 
 * step 2:
 * new_node->n = n(n=6)(adding the value of the new_node)
 *                +---+
 * new_node ----> |   |
 *                +---+
 *                  |  
 *                 n=6
 * step 3:
 * new_node->next = *head;(explanation:address inside head is stored into new node next )
 *                          +---+     +---+
 *               head ----> |   |---->|   |   ----> NULL
 *             |   ^  |     +---+     +---+
 *                 |          |         |  
 *                 |         n=4       n=2                                
 *                 |         
 * new_node->next--|  
 *   
 * *head =new_node(address of new_node is stored into head)
 *            +---+     +---+     +---+
 * head ----> |   |---->|   |---->|   |----> NULL
 *            +---+     +---+     +---+
 *              |         |         |        
 *             n=6       n=4       n=2        
*/