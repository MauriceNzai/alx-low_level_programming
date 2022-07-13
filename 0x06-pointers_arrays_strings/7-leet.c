#include "main.h"

/**
 * leet - Encodes a string into 1337
 *
 * @s: String input
 *
 * Description:Replace letters a andA by 4
 * Replace lettera e and E by 3
 * Replace o and O by 0
 * Replace t and T by 7
 * Replace l and L by 1
 *
 * Return: Pointer to string
 */

char *leet(char *s)
{
int i = 0, j;

char subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

while (s[i])
{

for (j = 0; j < 10; j++)

if (s[i] == str[j])

s[i] = subs[j];
      
i++;

}

return (s);
 
}
