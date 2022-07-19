#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints sum of two diagonals of a square matrix integers
 *
 * @a: Pointer to an integer array
 * @size: The size of the array
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
int i;
int sum_1;
int sum_2;

for (i = 0; i < (size * size); i++)
{

if (i % (size + 1) == 0)
sum_1 += *(a + i);

if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
sum_2 += *(a + i);
}

printf("%d, %d\n", sum_1, sum_2);
}
