#include "main.h"

/**
 * swap_int - This functions swaps the values of two inyegers
 *
 * @a: First input integer pointer
 * @b: Second input integer pointer
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
int swap;

swap = *a;
*a = *b;
*b = swap;
}
