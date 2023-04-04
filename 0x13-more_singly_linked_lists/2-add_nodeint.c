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
    /*a new varable is created to store the address of a new node added*/

	new_node = malloc(sizeof(listint_t));
    /*the step above is used to access memory for the new node*/
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
    /*the step above is used to store a varable into n*/
	new_node->next = *head;
    /*the step above is used to store the address of head inside new_node (next)*/
	*head = new_node;
    /*the step above is used to store the address of new_node into head so as to transve or link other nodes to the newly created node*/

	return (*head);
}