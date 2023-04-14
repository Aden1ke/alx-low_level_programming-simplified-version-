#include "lists.h"
/**
 * *insert_nodeint_at_index - a function that inserts a new node at a given position..
 * @head: pointer to the first node
 * @idx: is the index of the list where the new node should be added.
 * Return: pointer to the nth node, or NULL if it doesn't exist
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *tmp;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	i = 0;
	while (i < idx - 1 && tmp != NULL)
		{
			tmp = tmp->next;
			i++;
		}
		if (tmp == NULL)
		{
			return (NULL);
		}
		new_node->next = tmp->next;
		tmp->next = new_node;
		return (new_node);
}
/*NOTE*/
/** 
 *                     +-------+       +------+
 *                     | 1000  |       | 2000 |
 *  *head-->head---->  |   1   |       |   2  |
 *                     +-------+       +------+
 *                     |       |       |      |
 *                     | 2000 -|-----> | NULL |
 *                     +-------+       +------+
 * 
 *                +-------+      
 *                | 0000 <-----new_node(address) 
 * new_node---->  |   4  <-----new_node->n    
 *                +-------+   
 *                |       |  
 *                | NULL <-----new_node->next
 *                +-------+
 * 
 * if idx = 0(add a new_node to the front of the linked list)
 * new_node-next= head
 *                +-------+                     +-------+       +------+
 *                | 0000  |                     | 1000  |       | 2000 |
 * new_node---->  |   4   |  *head-->head-----> |   1   |       |   2  |
 *                +-------+                     +-------+       +------+
 *                |       |                     |       |       |      |
 *                | 1000  | ------------------> | 2000 -|-----> | NULL |
 *                +-------+                     +-------+       +------+
 * 
 * *head = new_node;
 *                        +-------+      +-------+       +------+
 *                        |  0000 |      | 1000  |       | 2000 |
 * *head-->new_node---->  |   4   |      |   1   |       |   2  |
 *                        +-------+      +-------+       +------+
 *                        |       |      |       |       |      |
 *                        | 1000  | ---> | 2000 -|-----> | NULL |
 *                        +-------+      +-------+       +------+
 * after the new_node is stored
 *               +-------+      +-------+       +------+
 *               | 0000  |      | 1000  |       | 2000 |
 * *head------>  |   4   |      |   1   |       |   2  |
 *               +-------+      +-------+       +------+
 *               |       |      |       |       |      |
 *               | 1000  | ---> | 2000 -|-----> | NULL |
 *               +-------+      +-------+       +------+
 * 
 * 
 * tmp = *head; 
 *                        +-------+      +-------+       +------+
 *                        | 0000  |      | 1000  |       | 2000 |
 * tmp------->*head---->  |   4   |      |   1   |       |   2  |
 *                        +-------+      +-------+       +------+
 *                        |       |      |       |       |      |
 *                        | 1000  | ---> | 2000 -|-----> | NULL |
 *                        +-------+      +-------+       +------+
 * 
 * 
 */



 /** if idx = 2
 * while (i < 2 - 1 && tmp != NULL),therefore the new_node will be added at 1,while (i < 1 && tmp != NULL)
 * i < 1
 * we need to print out each node in the linked list :
 *  i = 0(print the 1st node on the linked list)
 * tmp=tmp->next;
 * i++
 *                     +-------+
 *                     | 0000  |     
 *  *head-->head---->  |   4   |    
 *     ^               +-------+     
 *     |               |       |     
 *     |               | 1000 -|
 *     tmp             +-------+    
 * 
 * i = 1(print the 2nd node on the linked list)
 * tmp=tmp->next;
 * i++
 *                     +-------+       +------+
 *                     | 1000  |       | 1000 |
 *  *head-->head---->  |   4   |       |   1  |
 *                     +-------+       +------+
 *                     |       | tmp-->|      |
 *                     | 1000 -|-----> | 2000 |
 *                     +-------+       +------+ 
 * 
 *  i = 2(print the 3rd node on the linked list)
 * tmp=tmp->next;
 * i++
 *                        +-------+      +-------+       +------+
 *                        | 0000  |      | 1000  |       | 2000 |
 *     *head---->head---->|   4   |      |   1   |       |   2  |
 *                        +-------+      +-------+       +------+
 *                        |       |      |       | tmp-->|      |
 *                        | 1000  | ---> | 2000 -|-----> | NULL |
 *                        +-------+      +-------+       +------+
 * i < 1(add new node)
 *                +-------+      
 *                |  3000 <-----new_node(address)    
 * new_node---->  |   5   <-----new_node-->n
 * (3000)         +-------+   
 *                |       |  
 *                | NULL <-----new_node->next
 *                +-------+
 * 
 * new_node->next = tmp->next;
 *                   +-------+      +-------+       +------+
 *                   |  0000 |      | 1000  |       | 2000 |
 *        *head--->  |   4   |      |   1   |       |   2  |
 *                   +-------+      +-------+       +------+
 *                   |       |tmp-->|       |       |      |
 *                   | 1000  | ---> | 2000 -|-----> | NULL |
 *                   +-------+      +---|---+       +------+
 *                                  |   |  |       
 *                                      |              
 *                           tmp->next--|            
 *                               |
 *                +-------+      |
 *                | 3000  |      |
 * new_node---->  |   5   |      |
 *   (3000)       +-------+      |
 *                |       |      |
 *                | 2000<--------|
 *                +-------+
 *             
 *    
 * tmp->next = new_node;      
 *                   +-------+      +-------+       +------+
 *                   | 0000  |      | 1000  |       | 2000 |
 *        *head--->  |   4   |      |   1   |       |   2  |
 *                   +-------+      +-------+       +------+
 *                   |       |tmp-->|       |       |      |
 *                   | 1000  | ---> | 3000 -|-----> | NULL |
 *                   +-------+      +---|---+       +------+
 *                                  |   |  |       
 *                                      |              
 *       --------------------tmp->next--|  
 *       | 
 *       |                       
 *       |        +-------+      
 *       |        | 3000  |      
 * new_node---->  |   5   |      
 *   (3000)       +-------+      
 *                |       |      
 *                | 2000  |
 *                +-------+   
 *                   +-------+      +-------+       +------+      +------+
 *                   |  0000 |      | 1000  |       | 3000 |      | 2000 |
 *        *head--->  |   4   |      |   1   |       |   5  |      |   2  |
 *                   +-------+      +-------+       +------+      +------+
 *                   |       |tmp-->|       |       |      |      |      |
 *                   | 1000  | ---> | 3000 -|-----> | 2000 |----->| NULL |
 *                   +-------+      +---|---+       +------+      +------+
 * 
 * 
 */



 /** if idx = 3
 * while (i < 3 - 1 && tmp != NULL),therefore the new_node will be added at 1,while (i < 2 && tmp != NULL)
 * i < 2
 * we need to print out each node in the linked list :
 *  i = 0(print the 1st node on the linked list)
 * tmp=tmp->next;
 * i++
 *                     +-------+
 *                     | 0000  |     
 *  *head-->head---->  |   4   |    
 *     ^               +-------+     
 *     |               |       |     
 *     |               | 1000 -|
 *     tmp             +-------+    
 * 
 * i = 1(print the 2nd node on the linked list)
 * tmp=tmp->next;
 * i++
 *                     +-------+       +------+
 *                     | 1000  |       | 1000 |
 *  *head-->head---->  |   4   |       |   1  |
 *                     +-------+       +------+
 *                     |       | tmp-->|      |
 *                     | 1000 -|-----> | 2000 |
 *                     +-------+       +------+ 
 * i = 2(print the 3rd node on the linked list)
 * i < 2(add new node)
 *                        +-------+      +-------+       +------+
 *                        | 0000  |      | 1000  |       | 3000 | 
 *            *head---->  |   4   |      |   1   |       |   5  |
 *                        +-------+      +-------+       +------+
 *                        |       |      |       | tmp-->|      |
 *                        | 1000  | ---> | 3000 -|-----> | 2000 |
 *                        +-------+      +-------+       +------+
 * 
 *  i = 3(print the 4th node on the linked list)
 * i < 2(add new node)
 *                   +-------+      +-------+       +------+      +------+
 *                   |  0000 |      | 1000  |       | 3000 |      | 2000 |
 *        *head--->  |   4   |      |   1   |       |   5  |      |   2  |
 *                   +-------+      +-------+       +------+      +------+
 *                   |       |tmp-->|       |       |      |      |      |
 *                   | 1000  | ---> | 3000 -|-----> | 2000 |----->| NULL |
 *                   +-------+      +---|---+       +------+      +------+
 * 
 *                +-------+      
 *                |  4000 <-----new_node(address)    
 * new_node---->  |   6   <-----new_node-->n
 * (3000)         +-------+   
 *                |       |  
 *                | NULL <-----new_node->next
 *                +-------+
 * 
 * new_node->next = tmp->next;
 *                   +-------+      +-------+       +------+      +------+
 *                   |  0000 |      | 1000  |       | 3000 |      | 2000 |
 *        *head--->  |   4   |      |   1   |       |   5  |      |   2  |
 *                   +-------+      +-------+       +------+      +------+
 *                   |       |tmp-->|       |       |      |      |      |
 *                   | 1000  | ---> | 3000 -|-----> | 2000 |----->| NULL |
 *                   +-------+      +-------+       +--|---+      +------+
 *                                                 |   |  |       
 *                                                     |              
 *                           tmp->next-----------------|            
 *                               |
 *                +-------+      |
 *                | 4000  |      |
 * new_node---->  |   6   |      |
 *   (3000)       +-------+      |
 *                |       |      |
 *                | 2000<--------|
 *                +-------+
 *             
 *    
 * tmp->next = new_node;      
  *                  +-------+      +-------+       +------+      +------+
 *                   |  0000 |      | 1000  |       | 3000 |      | 2000 |
 *        *head--->  |   4   |      |   1   |       |   5  |      |   2  |
 *                   +-------+      +-------+       +------+      +------+
 *                   |       |tmp-->|       |       |      |      |      |
 *                   | 1000  | ---> | 3000 -|-----> | 2000 |----->| NULL |
 *                   +-------+      +-------+       +--|---+      +------+
 *                                                  |  |   |       
 *                                                     |              
 *       ------------------- tmp->next-----------------|          
 *       | 
 *       |                       
 *       |        +-------+      
 *       |        | 4000  |      
 * new_node---->  |   6   |      
 *   (4000)       +-------+      
 *                |       |      
 *                | 2000  |
 *                +-------+   
 *                   +-------+      +-------+       +------+      +------+     +-------+
 *                   |  0000 |      | 1000  |       | 3000 |      | 4000 |     | 2000  | 
 *        *head--->  |   4   |      |   1   |       |   5  |      |   6  |     |   2   |
 *                   +-------+      +-------+       +------+      +------+     +-------+
 *                   |       |tmp-->|       |       |      |      |      |     |       |     
 *                   | 1000  | ---> | 3000 -|-----> | 4000 |----->| 2000 |---->| NULL  |
 *                   +-------+      +---|---+       +------+      +------+      +------+
 * */


/*FOR MORE EXPLANATION*/
/**
 * you also use a for loop:
 * for (tmp = *head; i < idx - 1 && tmp != NULL; i++)
 * {
 * tmp = tmp->next;
 * }
 */
 /**
  * STEPS:
  * STEP 1:
 * *new_node - the node added to the linked list.
 * allocate memory for the new node
 * [new_node = malloc(sizeof(listint_t))].
 * 
 * STEP 2:
 * check if malloc failed,if malloc failed, return NULL
 * [if (new_node == NULL)
 * return (NULL);]
 * 
 * STEP 3:
 * set the value of the new_node(new_node->n = n;),
 * set the next pointer of the new node to NULL(new_node->next = NULL;)
 * 
 * STEP 4:
 * check if the linked list is empty,if it's empty, return the new node
 * [if (*head == NULL)
 * {
 * return (new_node);
 * }]
 * 
 * STEP 5:
 * if (idx == 0) (if idx = 0 then the new node should be inserted at the beginning of the list)
 * {
 * new_node->next = *head;(set the next pointer of the new node to the current head)
 * *head = new_node;(set the head of the list to the new node)
 * return (new_node);  ( return the new node)
 * }
 *
 * STEP 6:
 *  tmp = *head;    (set the temporary node to the head of the list,tmp is used to transver through the list)
 * i = 0;    (i is used it iterate through the index to be able to access idx value to store the new node[set the counter variable to 0])
 * 
 * 
 * STEP 7:
 * i = 0;
 * while (i < idx - 1 && tmp != NULL)
 * {
 * tmp = tmp->next;
 * i++;
 * }
 * So in the code for ( i = 0; i < idx - 1 && tmp != NULL; i++) or the while loop above,
 *  we have a for loop that is iterating over the linked list nodes until it reaches the index where we want to insert the new node
 * Here's a more detailed explanation of each part of the loop header:
 * 
 * unsigned int i = 0: We initialize a counter variable i to 0, which we will use to keep track of our current position in the linked list as we iterate through it.
 * 
 * i < idx - 1: is used to iterate through the linked list so We check if our current position i is less than the index where we want to insert the new node so We subtract 1 from the index because we want to stop one node before the index where we want to insert the new node)
 *  For example,
 * if idx = 3(which represent the fourth node in the linked list),
 * it means we want to add a new node just after 2(which represent the third node in the linked list) 
 * i is used to iterate the position idx in the linked list
 * for example : i < 3 - 1 which means i < 2,
 * therefore if (first node on the linked list is 0) i = 0 (tmp = tmp->next; this command will iterate)
 * i++, then i becomes 1(second node on the linked list is 1) i = 1 (tmp = tmp->next; this command will iterate)
 * i++ then i becomes 2(third node on the linked list is 2) i = 1 (tmp = tmp->next; this command will iterate)
 * since i < 2(the linked list will not iterate tmp = tmp->next; and i++ which means we can add the new node before idx=3)
 *  (if we want to insert a node at index 3, we want to iterate through the linked list until we reach the node at index 2, and then insert the new node after that node. Therefore, we use i < idx - 1 to iterate through the linked list idx - 1 times to get to the node just before the desired index.)
 * 
 * tmp != NULL: We check if we have not reached the end of the linked list, which means that tmp is not equal to NULL. This check ensures that we do not try to access a null pointer and avoids a segmentation fault.
 * 
 * i++: We increment the counter variable i after each iteration of the loop.
 * So as the loop iterates through the linked list, 
 * it keeps track of its position using the i counter variable, 
 * and moves the tmp pointer forward to point to the next node in the list until it reaches the node just before the index where we want to insert the new node.
 * 
 * STEP 8:
 * check if we reached the end of the list before the insertion point,if we did, return NULL
 * if (tmp == NULL)
 * {
 * return (NULL);
 * }
 * 
 * STEP 9:
 * set the next pointer of the new node to the node at the insertion point
 * new_node->next = tmp->next;
 * set the next pointer of the previous node to the new node
 * tmp->next = new_node;
 * return (new_node);
 * 
 */
 