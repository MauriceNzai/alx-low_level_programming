#include "main.h"

/**
 * print_line - This function draws a line in the terminal
 * only allowed to use _putchar function to print and end with a new line
 * if n is 0 or less, the function only prints a new line
 *
 * @n: integer value showing number of times character _ is to be printed
 *
 * Return: Nothing
 */

void print_line(int n)
{
int x;

if (n > 0)
{

for (x = 0; x < n; x++)
_putchar('_');

}
_putchar('\n');

}
