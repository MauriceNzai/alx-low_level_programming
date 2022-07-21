#include "main.h"

#include "2-strlen_recursion.c"

/**
 * help_palindrome - holds reversed string,
 * to help is_palindrome function
 *
 * @s: An inpuut string
 * @len: Length os string s
 *
 * Return: Reversed string s
 */

int help_palindrome(char *s, int len)
{
if (len <= 1)
return (1);

else if (*s == *(s + len - 1))
{
return (help_palindrome(s + 1, len - 2));
}

else
return (0);
}
/**
 * is_palindrome - Returns 1 if string is palindrom; 0 if not
 *
 * Description: An empty string is a palindrome
 *
 * @s: The string to determine
 *
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
int len;

len = _strlen_recursion(s);
if (len <= 1)
return (1);

return (help_palindrome(s, len));
}
