#include "main.h"
#include "2-strlen.c"

/**
 * _atoi - converts string to integer
 * @s: string to convert
 *
 * Return: returns integer value
 */

int _atoi(char *s)
{
unsigned int count = 0;
unsigned int size = 0;
unsigned int oi = 0;
unsigned int pn = 1;
unsigned int m = 1;
unsigned int i;

while (*(s + count) != '\0')

{
if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))

break;

if (*(s + count) == '-')

pn *= -1;

if ((*(s + count) >= '0') && (*(s + count) <= '9'))

{

if (size > 0)

m *= 10;

size++;

}

count++;

}

for (i = count - size; i < count; i++)

{

oi = oi + ((*(s + i) - 48) * m);

m /= 10;
}

return (oi *pn);

}
