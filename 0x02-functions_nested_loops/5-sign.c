#include "main.h"

/**
 * print_sign(int n) - See description
 *
 * @n: an integer value
 *
 * Description: This function prints the sign of a number n
 * and returns 1 and prints + if n is greater than zero
 * or returns 0 and prints 0 if n is zero
 * or returns -1 and prints - if n is less than zero
 *
 * Return: 1, 0, -1
 */

int print_sign(int n)
{
int value;

if (n > 0)
{
value = 1;
_putchar('+');
}
else if (n == 0)
{
value = 0;
_putchar('0');
}
else
{
value = -1;
_putchar('-');
}

return (value);
}
