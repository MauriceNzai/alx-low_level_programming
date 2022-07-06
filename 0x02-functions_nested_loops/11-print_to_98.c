#include "main.h"

/**
 * print_to_98 - This function prints all the natural numbers
 * from n to 98, followed by a new line
 *
 * @n: An integer input
 *
 * Return: Nothing
 */

void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
printf("%d", n);

if (n == 98)
continue;

printf(", ");
}
printf("\n");
}
else
{
for (; n >= 98; n--)
{
printf("%d", n);

if (n == 98)
continue;

printf(", ");
}
printf("\n");
}
}
