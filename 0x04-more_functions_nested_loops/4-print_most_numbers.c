#include "main.h"

/**
 * print_most_numbers - This function print the numbers
 * from 0 to 9 followed by a new line but skipping 2 and 4
 * You can only us _putchar function and only twice
 *
 * Return: Nothing
 */

void print_most_numbers(void)
{
int x;

for (x = '0'; x <= '9'; x++)
{

if (x != '2' && x != '4')
_putchar(x);

}

_putchar('\n');
}
