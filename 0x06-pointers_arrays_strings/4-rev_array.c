#include "main.h"

/**
 * reverse_array - reverses the contents of an array of integers
 *
 * @a: An input array
 * @n: The number of elements in the array
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
int x = 0;
int tmp;

while (x < n--)
{
tmp = a[x];
a[x++] = a[n];
a[n] = tmp;
}
}
