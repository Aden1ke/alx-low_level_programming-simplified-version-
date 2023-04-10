#include "lists.h"
/**
 * free_listint - free the node.
 *@head: pointer to pointer of the first node.
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

    while (head != NULL)
    {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}
/*
Let's say we have a linked list of integers that looks like this:
head
  |
  v
+---+    +---+    +---+
| 1 | -> | 2 | -> | 3 | -> NULL
+---+    +---+    +---+
Here, head points to the first node, which contains the integer value 1. The first node points to the second node, which contains the value 2, and so on. The last node points to NULL, which marks the end of the list.

Now, let's step through the code below:

#include "lists.h"

/**
 void free_listint(listint_t *head)
{
	listint_t *tmp;

    while (head != NULL)
    {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}
 */


/**
 * Let's go through each iteration of the loop with our example list:
 * 
 * Iteration 1:
    head = 1 -> 2 -> 3 -> NULL
    tmp = 1 -> 2 -> 3 -> NULL
    free(tmp)
    In the first iteration, head points to the first node, which contains the value 1. We set tmp to head, so tmp also points to the first node. Then, we set head to head->next, which moves it to the second node. Finally, we call free(tmp) to free the memory allocated for the first node.
 
 * Iteration 2:
    head = 2 -> 3 -> NULL
    tmp = 2 -> 3 -> NULL
    free(tmp)
In the second iteration, head points to the second node, which contains the value 2. We set tmp to head, so tmp also points to the second node. Then, we set head to head->next, which moves it to the third node. Finally, we call free(tmp) to free the memory allocated for the second node.

* Iteration 3:
    head = 3 -> NULL
    tmp = 3 -> NULL
    free(tmp)
In the third iteration, head points to the third node, which contains the value 3. We set tmp to head, so tmp also points to the third node. Then, we set head to head->next, which moves it to NULL. Finally, we call free(tmp) to free the memory allocated for the third node.

* Iteration 4:
    head = NULL
In the final iteration, head points to NULL, so the loop condition head != NULL is false, and we exit the loop.

After the loop, all nodes in the list have been freed, and head points to NULL to indicate that the list is empty:
head
  |
  v
NULL
*/
