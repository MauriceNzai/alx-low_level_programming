#include "main.h"

/**
 * print_triangle - This function prints a triangle followed by a new line
 * You can only use the function _putchar to print
 * Use the character # to print the triangle
 * if size is 0 or less,the function prints only a new line
 *
 * @size:integer value representing the size of the triangle
 *
 * Return: Nothing
 */

void print_triangle(int size)
{

int x;
int y;
int n;

n = size - 1;

if (size > 0)
{

for (x = 0; x < size; x++)
{

for (y = 0; y < size; y++)
{

if (y < n)
_putchar(' ');

else
_putchar('#');

}
n--;

_putchar('\n');

}

}

else
_putchar('\n');

}
