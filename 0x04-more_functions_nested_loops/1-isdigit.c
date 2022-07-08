#include "main.h"

/**
 * _isdigit - This function checks for a digit (0 to 9)
 *
 * @c: An integer input
 *
 * Return: 1 if c is digit 0 otherwise
 */

int _isdigit(int c)
{
char x;
int isdigit;

x = '0';
isdigit = 0;

for (; x <= '9'; x++)
{

if (x == c)
{
isdigit = 1;
break;
}

}
return (isdigit);
}
