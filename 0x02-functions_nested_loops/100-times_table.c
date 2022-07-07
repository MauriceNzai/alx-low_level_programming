#include "main.h"

/**
 * print_times_table - This function prints the times table starting with 0
 * If n is greater the 15 or less than 0, the function prints nothing
 *
 * @n: An integer value determing the times table to print
 *
 * Return: Nothing
 */

void print_times_table(int n)
{

int x;
int y;

if (n >= 0 && n <= 15)
{

for (x = 0; x <= n; x++)
{
_putchar('0');

for (y = 1; y <= n; y++)

putformat(x * y);
_putchar('\n');
}
}
}

/**
 * putformat - This function formats the output
 *
 * @n: The number to format
 *
 * Return: Nothing
 */

void putformat(int n)
{

if (n <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(n + '0');
}

else if (n > 9 && n <= 99)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
}

else
{
_putchar(',');
_putchar(' ');
_putchar(n / 100 + '0');
_putchar(n / 10 % 10 + '0');
_putchar(n % 10 + '0');
}

}
