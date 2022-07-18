#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: The initial string
 * @accept: The substring to get
 *
 * Return: Number of bytes of accept
 */

unsigned int _strspn(char *s, char *accept)
{
int cnt = 0;
int flag;
char *begin = accept;

while (*s)
{
flag = 0;

while (*accept)
{
if (*accept == *s)
{
cnt++;
flag = 1;
break;
}
accept++;
}
s++
accept = begin;
if (flag == 0)
break;
}
return (cnt);

}
