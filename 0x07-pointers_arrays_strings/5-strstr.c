#include "main.h"

/**
 * _strstr - Locates substring, finds first occurence of substring 'needle'
 * in the srting 'heystack'. Terminating null bytes (\0) arent compared
 *
 * @haystack: The string to search in
 * @needle: The substring to locate
 *
 * Return: Pointer to beginning of 'needle' or Null if not found
 */

char *_strstr(char *haystack, char *needle)
{

while (*haystack != '\0')
{

char *beginning = haystack;
char *pattern = needle;

while (*pattern == *haystack && *pattern != '\0' && *haystack != '\0')
{
haystack++;
pattern++;
}

if (*pattern == '\0')
return (beginning);
haystack = beginning + 1;
}

return ('\0');
}
