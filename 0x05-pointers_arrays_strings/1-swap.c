#include "main.h"

/**
 * swap_int - take on two variable integers and swaps them
 * @author Anisha
 * @a: swap and stores address of b
 * @b:swaps and stores adress of a
 * Return: 0
*/

void swap_int(int *a, int *b)
{
int change;
change = *b;
*b = *a;
*a = change;
}

