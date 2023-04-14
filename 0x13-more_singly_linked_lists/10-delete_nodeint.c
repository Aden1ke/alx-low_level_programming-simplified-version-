#include "lists.h"

/**
 * delete_nodeint_at_index - add a new node at the end of a listint_t list.
 *@index:  node.
 *@head: pointer to pointer of the first node.
 * Return: the address of the new element.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = *head, *pre_node;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	pre_node = *head;
	tmp = (*head)->next;
	for (i = 0; i < index &&  tmp != NULL; i++)
	{
		pre_node = tmp;
		tmp = tmp->next;
	}
		if (tmp->next == NULL)
		{
			pre_node->next = NULL;
			free(tmp);
		}
		else
		{
			pre_node->next = tmp->next;
			free(tmp);
		}
		return (1);
}
/**
 * if index == 0(it means we need to delet the first index),to do that (tmp = head)
 *                   +-------+      +-------+       +------+      +------+     +-------+
 *                   |  0000 |      | 1000  |       | 3000 |      | 4000 |     | 2000  | 
 * tmp--->*head--->  |   4   |      |   1   |       |   5  |      |   6  |     |   2   |
 *                   +-------+      +-------+       +------+      +------+     +-------+
 *                   |       |      |       |       |      |      |      |     |       |     
 *                   | 1000  | ---> | 3000 -|-----> | 4000 |----->| 2000 |---->| NULL  |
 *                   +-------+      +---|---+       +------+      +------+     +-------+
 * 
 * *head = (*head)->next;(update the address in head to the next node)
 *                   +-------+            +-------+       +------+      +------+     +-------+
 *                   |  0000 |            | 1000  |       | 3000 |      | 4000 |     | 2000  | 
 *         *tmp--->  |   4   |*head------>|   1   |       |   5  |      |   6  |     |   2   |
 *                   +-------+            +-------+       +------+      +------+     +-------+
 *                   |       |            |       |       |      |      |      |     |       |     
 *                   | 1000  |            | 3000 -|-----> | 4000 |----->| 2000 |---->| NULL  |
 *                   +-------+            +---|---+       +------+      +------+      +------+
 * 
 * free(tmp);(delete the first node whic is the node tmp is pointing to)
 *  *                +-------+       +------+      +------+     +-------+
 *                   | 1000  |       | 3000 |      | 4000 |     | 2000  | 
 *     *head--->     |   1   |       |   5  |      |   6  |     |   2   |
 *                   +-------+       +------+      +------+     +-------+
 *                   |       |       |      |      |      |     |       |     
 *                   | 3000 -|-----> | 4000 |----->| 2000 |---->| NULL  |
 *                   +---|---+       +------+      +------+      +------+
 * return (1); if the the first node has been succesfully deleted.
 */




 /** 
 *if index = last node(e.g index = 4) 
 * if (tmp->next == NULL)
 * {
 * pre_node->next = NULL;
 * free(tmp);
 * }
 *if index = last node(e.g index = 4) 
 * to know the last node we all know that tmp->next = NULL(is used to note the end of the list which is why we used it in the if conditional statement)
 * pre_node = *head;
 * tmp = (*head)->next;
 * the steps below is to iterate to the end of the list:
 *                   +-------+      +-------+       +------+     +-------+
 *                   |  0000 |      | 1000  |       | 3000 |     | 2000  | 
 * pre_node-->*head->|   4   |      |   1   |       |   5  |     |   2   |
 *                   +-------+      +-------+       +------+     +-------+
 *                   |       |tmp-->|       |       |      |     |       |     
 *                   | 1000  | ---> | 3000 -|-----> | 2000 |---->| NULL  |
 *                   +-------+      +---|---+       +------+      +------+
 * 
 * for (i = 0; i < index &&  tmp != NULL; i++)
 * * i is to iterate the index value(so we can get the exact value to delete)for (i = 0; i < index &&  tmp != NULL; i++)
 * note that we want to delete the node exactly at index no before(that is why we used i < index not i < index -1)
 *  the steps below is to iterate to the end of the list:
 * pre_node = tmp;
 * tmp = tmp->next;
 * we need to print out each node in the linked list:
 * i < index(4), i < 4
 * i = 0
 * pre_node = tmp;
 * tmp=tmp->next;
 *                               +-------+
 *                               | 0000  |     
 *  pre_node->*head-->head---->  |   4   |    
 *                               +-------+     
 *                               |       |     
 *                   tmp---------> 1000 -|
 *                               +-------+    
 * 
 * 
 * i = 1(print the 2nd node on the linked list)
 * pre_node = tmp;
 * tmp=tmp->next;
 * i++
 *                           +-------+           +------+
 *                           | 0000  |           | 1000 |
 *          *head-->head---->|   4   |pre_node-->|   1  |
 *                           +-------+           +------+
 *                           |       |           |      |
 *                           | 1000  |tmp------->| 2000 |
 *                           +-------+           +------+ 
 * 
 * 
 * pre_node = tmp;
 * tmp=tmp->next;
 * i++
 * i = 2(print the 3rd node on the linked list)
 *                        +-------+      +-------+           +------+
 *                        | 0000  |      | 1000  |           | 3000 | 
 *            *head---->  |   4   |      |   1   |pre_node-->|   5  |
 *                        +-------+      +-------+           +------+
 *                        |       |      |       |           |      |
 *                        | 1000  | ---> | 3000 -| tmp-----> | 2000 |
 *                        +-------+      +-------+           +------+
 * 
 *  tmp=tmp->next;
 *  i = 3(print the 4th node on the linked list)
 *                   +-------+      +-------+           +------+      +------+
 *                   |  0000 |      | 1000  |           | 3000 |      | 2000 |
 *        *head--->  |   4   |      |   1   |pre_node-->|   5  |      |   2  |
 *                   +-------+      +-------+           +------+      +------+
 *                   |       |tmp-->|       |           |      |      |      |
 *                   | 1000  | ---> | 3000 -|---------->| 2000 |-tmp->| NULL |
 *                   +-------+      +---|---+           +------+      +------+
 * 
 * 
 * if (tmp->next == NULL)
 * {
 * pre_node->next = NULL;
 * free(tmp);
 * }
 *  pre_node->next = NULL;
 *                   +-------+      +-------+           +------+               +------+
 *                   |  0000 |      | 1000  |           | 3000 |               | 2000 |
 *        *head--->  |   4   |      |   1   |pre_node-->|   5  |               |   2  |
 *                   +-------+      +-------+           +------+               +------+
 *                   |       |tmp-->|       |           |      |               |      |
 *                   | 1000  | ---> | 3000 -|---------->| NULL |          tmp->| NULL |
 *                   +-------+      +---|---+           +------+               +------+
 *  free(tmp);(delete the last node)
 *                   +-------+      +-------+           +------+
 *                   |  0000 |      | 1000  |           | 3000 |
 *        *head--->  |   4   |      |   1   |pre_node-->|   5  |
 *                   +-------+      +-------+           +------+
 *                   |       |tmp-->|       |           |      |
 *                   | 1000  | ---> | 3000 -|---------->| NULL |
 *                   +-------+      +---|---+           +------+
 * 
 */




/**
 * *if index = any number e.g 2
 * to know the last node we all know that tmp->next = NULL(is used to note the end of the list which is why we used it in the if conditional statement)
 * pre_node = *head;
 * tmp = (*head)->next;
 * the steps below is to iterate to the end of the list:
 *                   +-------+      +-------+       +------+     +-------+
 *                   |  0000 |      | 1000  |       | 3000 |     | 2000  | 
 * pre_node-->*head->|   4   |      |   1   |       |   5  |     |   2   |
 *                   +-------+      +-------+       +------+     +-------+
 *                   |       |tmp-->|       |       |      |     |       |     
 *                   | 1000  | ---> | 3000 -|-----> | 2000 |---->| NULL  |
 *                   +-------+      +---|---+       +------+      +------+
 * 
 * for (i = 0; i < index &&  tmp != NULL; i++)
 * * i is to iterate the index value(so we can get the exact value to delete)for (i = 0; i < index &&  tmp != NULL; i++)
 * note that we want to delete the node exactly at index no before(that is why we used i < index not i < index -1)
 *  the steps below is to iterate to the end of the list:
 * pre_node = tmp;
 * tmp = tmp->next;
 * we need to print out each node in the linked list:
 * i < index(4), i < 4
 * i = 0
 * pre_node = tmp;
 * tmp=tmp->next;
 *                               +-------+
 *                               | 0000  |     
 *  pre_node->*head-->head---->  |   4   |    
 *                               +-------+     
 *                               |       |     
 *                   tmp---------> 1000 -|
 *                               +-------+    
 * 
 * 
 * i = 1(print the 2nd node on the linked list)
 * pre_node = tmp;
 * tmp=tmp->next;
 * i++
 *                           +-------+           +------+
 *                           | 0000  |           | 1000 |
 *          *head-->head---->|   4   |pre_node-->|   1  |
 *                           +-------+           +------+
 *                           |       |           |      |
 *                           | 1000  |tmp------->| 2000 |
 *                           +-------+           +------+ 
 * 
 * 
 * pre_node = tmp;
 * tmp=tmp->next;
 * i++
 * i = 2(print the 3rd node on the linked list)
 *                        +-------+      +-------+           +------+
 *                        | 0000  |      | 1000  |           | 3000 | 
 *            *head---->  |   4   |      |   1   |pre_node-->|   5  |
 *                        +-------+      +-------+           +------+
 *                        |       |      |       |           |      |
 *                        | 1000  | ---> | 3000 -| tmp-----> | 2000 |
 *                        +-------+      +-------+           +------+
 * 
 *  tmp=tmp->next;
 *  i = 3(print the 4th node on the linked list)
 *                   +-------+          +-------+     +------+      +------+
 *                   |  0000 |          | 1000  |     | 3000 |      | 2000 |
 *        *head--->  |   4   |pre_node->|   1   |     |   5  |      |   2  |
 *                   +-------+          +-------+     +------+      +------+
 *                   |       |          |       |     |      |      |      |
 *                   | 1000  | --->     | 3000 -|tmp->| 2000 |----> | NULL |
 *                   +-------+          +---|---+     +------+      +------+
 * else
 * {
 * 		pre_node->next = tmp->next;
 *   	free(tmp);
 * }
 * * 		pre_node->next = tmp->next;
 *                   +-------+          +-------+     +------+      +------+
 *                   |  0000 |          | 1000  |     | 3000 |      | 2000 |
 *        *head--->  |   4   |pre_node->|   1   |     |   5  |      |   2  |
 *                   +-------+          +-------+     +------+      +------+
 *                   |       |          |       |     |      |      |      |
 *                   | 1000  | --->     | 2000 -|tmp->| 2000 |----> | NULL |
 *                   +-------+          +---|---+     +------+      +------+
 * 	free(tmp);
 * 
 *             +-------+      +-------+       +------+
 *             | 0000  |      | 1000  |       | 2000 |
 * *head---->  |   4   |      |   1   |       |   2  |
 *             +-------+      +-------+       +------+
 *             |       |      |       |       |      |
 *             | 1000  | ---> | 2000 -|-----> | NULL |
 *             +-------+      +-------+       +------+
*/