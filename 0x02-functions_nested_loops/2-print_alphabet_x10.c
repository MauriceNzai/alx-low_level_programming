#include "main.h"

/**
 * print_alphabte_x10() - See description
 *
 * Description: Prints alphabet in lowercase 10 times followed by a new line
 *
 * Can only use _putchar twice
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
int x;
char y;

for (x = 0; x < 10; x++)
{
for (y = 'a'; y <= 'z'; y++)
_putchar(y);
_putchar('\n');
}
}
