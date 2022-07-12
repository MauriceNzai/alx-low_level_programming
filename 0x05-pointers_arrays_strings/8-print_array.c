#include <stdio.h>

#include "main.h"

/**
 * print_array - This function prints n elements of an array of integers
 * followed by a new line, n is number of elements of array to be printed
 * Numbers must be separated by a comma followed by a space
 * Numbers must be displayed in same order as they are stored in the array
 *
 * @a: The array to print contents of
 * @n: The number of elements of array to be printed
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
int x;

for (x = 0; x < n; x++)
{
printf("%d", a[x]);

if (x < n - 1)
printf(", ");

printf("\n");

}
}
