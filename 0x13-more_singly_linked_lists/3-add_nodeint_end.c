#include "lists.h"

/**
 * *add_nodeint_end - add a new node at the end of a listint_t list.
 *@n: integers in the node.
 *@head: pointer to pointer of the first node.
 * Return: the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
    listint_t *tmp;
    	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
     
	{
		*head = new_node; 
		return (new_node); 

		tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node;

	/*Return the address of the new node*/
	return (new_node);
}


/*NOTE*/
/**
 * if head= NULL (head ---->  NULL)
 * where:
 * new_node->n = 2;
 * new_node->next = NULL; 
 *                        +---+
 * *head = new_node ----> |   |----> NULL
 *                        +---+
 *                          |  
 *                         n=2 
 * tmp = *head
 *                  +---+
 * tmp = head ----> |   |----> NULL
 *                  +---+
 *                    |  
 *                   n=2
 * 
 * 
 * 
 * while tmp->next == NULL; 
 * Iteration 1
 * new_node->n = 4;
 * new_node->next = NULL;
 * step 1 :  
 *                  +---+
 * tmp = head ----> | 1 |----> tmp->next ----> NULL
 *                  +---+
 *                    |  
 *                   n=2
 * step 2:
 * new_node->n = n(n=4)(adding the value of the new_node)
 *                +---+
 * new_node ----> | 2 | ----> new_node->next ----> NULL;
 *                +---+
 *                  |  
 *                 n=4
 * step 3:
 * tmp->next = new_node;(explanation:address inside new_node is stored into tmp->next )
 *                            +---+
 *             new_node ----> | 2 | ----> new_node->next ----> NULL;
 *             |   ^  |       +---+
 *                 |           |  
 *                 |          n=4 
 *                 |
 *                 |
 *      tmp->next--|  
 *   
 *            +---+     +---+
 * head ----> | 1 |---->| 2 |  ----> new_node->next ----> NULL;
 *            +---+     +---+
 *              |         |  
 *             n=2       n=4(new_node)
 *              ^        |  ^  |      
 *             tmp          |           
 *                          |           
 *                          |
 *                          |
 *               tmp->next--|  
 * 
 * step 4:
 *   tmp =  tmp->next():
 *            +---+     +---+
 * head ----> | 1 |---->| 2 | ----> tmp->next ----> NULL
 *            +---+     +---+
 *              |         |  
 *             n=2       n=4(new_node)
 *                    |   ^  |      
 *                        |           
 *                        |         
 *                        |
 *                        |
 *                   tmp--|  
 * 
 * Iteration 2:
 * while tmp->next == NULL; 
 * Iteration 1
 * new_node->n = 6;
 * new_node->next = NULL;
 * step 1 :  
  *           +---+     +---+
 * head ----> | 1 |---->| 2 |   ----> tmp->next ----> NULL
 *            +---+     +---+
 *              |         |  
 *             n=2       n=4 
 *                    |   ^  |      
 *                        |           
 *                        |         
 *                        |
 *                        |
 *                   tmp--|  
 * 
 * step 2:
 * new_node->n = n(n=6)(adding the value of the new_node)
 *                +---+
 * new_node ----> |   |
 *                +---+
 *                  |  
 *                 n=6
 * step 3:
 * tmp->next = new_node;(explanation:address inside new_node is stored into tmp->next )
 *                            +---+
 *             new_node ----> |   |  ----> NULL
 *             |   ^  |       +---+
 *                 |            |  
 *                 |           n=6 
 *                 |
 *                 |
 *      tmp->next--|  
 *   
 * 
 *            +---+     +---+     +---+
 * head ----> |   |---->|   |---->|   |----> NULL
 *            +---+     +---+     +---+
 *              |         |         |        
 *             n=2      n=4       n=6                         
 *                       ^      |  ^  |      
 *                      tmp        |           
 *                                 |
 *                      tmp->next--| 
 * step 4:
 *   tmp =  tmp->next()
 *            +---+     +---+     +---+
 * head ----> |   |---->|   |---->|   |----> tmp->next ----> NULL
 *            +---+     +---+     +---+
 *              |         |         |        
 *             n=2      n=4       n=6                         
 *                              |  ^  |      
 *                                 |           
 *                                 |
 *                            tmp--|  
 */