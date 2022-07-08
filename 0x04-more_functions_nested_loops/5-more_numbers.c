#include "main.h"

/**
 * more_numbers - This function prints the numbers from 0 to 14
 * 10 times followed by a new line
 * You can only use the _putchar function and only 3 times
 *
 * Return: Nothing
 */

void more_numbers(void)
{
int x;
int y;

for (x = 0; x <= 9; x++)
{

for (y = 0; y <= 14; y++)
{
if (y > 9)
_putchar((y / 10) + '0');
_putchar((y % 10) + '0');
}
_putchar('\n');
}
}
