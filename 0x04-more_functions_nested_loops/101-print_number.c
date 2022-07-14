#include "main.h"

/**
 * print_number - This function prints an integer
 *
 * @n: The integer input to be printed
 *
 * Description: Can only use _putchar function to print
 * No using long, arrays or pointers or hard-code special values
 *
 * Return: Nothing
 */

void print_number(int n)
{
unsigned int m;
unsigned int d;
unsigned int count;

if (n < 0)
{
_putchar(45);
m = n * -1;
}

else
{
m = n;
}

d = m;
count = 1;

while (d > 9)
{
d /= 10;
count *= 10;
}

for (; count >= 1; count /= 10)
{
_putchar(((m / count) % 10) + 48);
}

}
