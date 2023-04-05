#include "lists.h"

/**
 * *add_nodeint_end - add a new node at the end of a listint_t list.
 *@n: integers in the node.
 *@head: pointer to pointer of the first node.
 * Return: the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;/*a pointer to store the new node to be added at the end of the list*/
    listint_t *tmp;
    /**
     * the pointer(tmp) represent a pointer that is Traversing through the linked list,
     * so we can access the last node in the list.
     * (Traversing refers to the process of accessing each node in a linked list, starting from the head node and moving through each successive node until the end of the list is reached).
     */

	/*Allocate memory for the new node*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		/*If memory allocation fails, the function returns NULL*/ 
		return (NULL);
	}

	/**
     * in the code below, we are creating a new node for a linked list.
     *  The first line, new_node->n = n;, assigns a value to the n field of the new node(which is a variable that stores some data associated with the node).
     * The second line, new_node->next = NULL;, sets the next field of the new node to NULL,
     * it also helps to siginfy the end of the list which makes it easy to keep adding nodes
     *  In a linked list, the next field is a pointer to the next node in the list. By setting it to NULL, we indicate that this is the last node in the list,as there are no further nodes to point to.
     * new_node->next = NULL; 
     */ 
	new_node->n = n;
	new_node->next = NULL;
/**
 * in the code below it is neccessary to note that If the list is empty,
 * (it also means the head does not contain any address),
 * you have to Make the new node the head of the list.
 */
	if (*head == NULL)
     
	{
		*head = new_node; /*Make the new node the head of the list*/ 
		return (new_node); /*Return the address of the new node*/ 
	}

	/**else If the list is not empty, 
     * traverse to the end of the list by putting the address inside head into tmp (tmp = *head;)
     * if tmp->next is not equal to 0(NULL) that means it has as not gotten to the last node
     * which means tmp needs to keep moving forward tmp = tmp->next;
     * The line tmp = tmp->next; assigns tmp to the next node in the list.
     * To explain further, tmp->next is a pointer to the next node in the list, and by assigning it to tmp,
     * we effectively update tmp to point to the next node.
     */ 
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	/**
     * note that before this step can happen tmp->next must be equal to 0(NULL),tmp->next=NULL
     * by setting tmp->next = new_node; we are adding the address of the new node,
     *  so as to join it with the linked list*/ 
	tmp->next = new_node;

	/*Return the address of the new node*/
	return (new_node);
}
