#include "main.h"

/**
 * _isupper - This function checks for uppercase character
 * if character is upper retuns 1 otherwiser return 0
 *
 * @c: an input character
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
char uppercase = 'A';
int isupper = 0;

for (; uppercase <= 'Z'; uppercase++)
{

if (c == uppercase)
{
isupper = 1;
break;
}
}
return (isupper);
}
