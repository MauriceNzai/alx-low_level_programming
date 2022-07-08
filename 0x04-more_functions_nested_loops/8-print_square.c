#include "main.h"

/**
 * print_square - This function prints a square, followed by a new line
 * You can only use _putchar function to print
 * use # to print the square
 * If size is 0 or less, the function only prints a new line
 *
 * @size: the number of times # character is to be printed
 *
 * Return: Nothing
 */

void print_square(int size)
{
int x;
int y;

if (size > 0)
{

for (x = 0; x < size; x++)
{

for (y = 0; y < size; y++)
_putchar('#');
_putchar('\n');

}
}

else
_putchar('\n');

}
