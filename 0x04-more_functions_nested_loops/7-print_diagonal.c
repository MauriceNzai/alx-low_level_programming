#include "main.h"

/**
 * print_diagonal - This function prints a diagonal line on the terminal
 * You can only use the _putchar function to print and
 * the diagonal to end wih a new line
 * if n is 0 or less the function prints on ly a new line
 *
 * @n: The number of times the character \ should be printed
 *
 * Return: Nothing
 */

void print_diagonal(int n)
{
int x;
int y;

if (n > 0)
{

for (x = 0; x < n; x++)
{

for (y = 0; y < x; y++)
_putchar(' ');
_putchar('\\');
_putchar('\n');

}
}

else

_putchar('\n');
}
