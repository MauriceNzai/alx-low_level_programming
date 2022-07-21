#include "main.h"

/**
 * wildcmp - compares two strings
 * and returns 1 if strings are identical, or 0 if not
 *
 * Description: s2 can contain the special character *
 * this special char * can replace any string (also empty string)
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: 1 if strings are identical or 0 if not
 */

int wildcmp(char *s1, char *s2)
{
if (!*s1 && !*s2)
return (1);

if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

if (*s2 == '*' &&
(wildcmp(s1, s2 + 1) ||
wildcmp(s1 + 1, s2)))
return (1);

if (*s2 == '*' && *(s1 + 1) && *s2)
return (0);

return (0);
}
