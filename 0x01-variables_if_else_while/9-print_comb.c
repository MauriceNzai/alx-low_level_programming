/**
 *This program will print all possible combinations of single digit numbers
 *
 *The number shall be separeted by a comma and followed by a space
 *
 *Only putchar function is to be used and a maximum four times
 *
 *No variable of type char is to be used
 */

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  int x;

  for (x = '0'; x <= '9'; x++)
    {
      putchar(x);
      if (x != '9')
	{
	  putchar(',');
	  putchar(' ');
	}
    }
  putchar('\n');

  return (0);
}
