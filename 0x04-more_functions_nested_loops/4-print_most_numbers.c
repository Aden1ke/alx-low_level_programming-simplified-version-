#include "main.h"
void print_most_numbers(void)
 {
    int i;
    for ( i = 0; i <= 9; i++)
    {
        if (i == 2 || i == 4)
        {
            continue;
        }
        else
        {
_putchar (i + '0');
        }
    }
    _putchar('\n');
}

/*OR*/
/*#include "main.h"
void print_most_numbers(void)
 {
    int i = 0;
while (i <= 9)
    {
       if (i != 2 && i != 4)
       {
        _putchar (i + '0');
       }
i++;
    }
     _putchar('\n');
 }*/


/**
 * The || and && are logical operators in C that are used to combine multiple conditions in a logical expression.
 * 
 * The || (logical OR) operator evaluates to true if at least one of the conditions on its left or right side is true.
 *  If both conditions are false, then the result of the logical OR operation is false.
 * 
 * The && (logical AND) operator evaluates to true only if both conditions on its left and right side are true. 
 * If any of the conditions is false, then the result of the logical AND operation is false.
 */  

/**
 * if (i == 2 || i == 4)
 * {
 *    continue;
 * }
 * The || (logical OR) operator is used, result--> (01356789)
 *  so the continue statement will be executed if i is equal to 2 or if i is equal to 4.
 *  In other words, if i is either 2 or 4, the loop iteration will be skipped.
 * 
 * but if && (logical AND) was used :
 * * if (i == 2 && i == 4)
 * {
 *    continue;
 * }it would print (0123456789) which is not what we want
 * Using ||: If i is equal to 2 or 4, the condition would be true and the continue statement would be executed,
 *  skipping the rest of the loop iteration.
 * 
 * Using &&: If i is equal to both 2 and 4 at the same time, the condition would be true and the continue statement would be executed, skipping the rest of the loop iteration.
 * 
 * However, it is not possible for a single variable i to have two different values at the same time.
 *  So, using && in this context would never result in the condition being true, 
 * and the continue statement would never be executed, which is not the intended behavior.
 * 
 * Therefore, using || in this context is correct because it allows the code to skip the loop iteration if i is equal to 2 or 4, which is the intended logic.
*/