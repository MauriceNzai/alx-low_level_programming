#include "main.h"

/**
 * print_alphabet - See description
 * Description: It prints the alphabet in lowercase followed by a new line
 * Can only use _putchar twice
 *
 * Return: Nothing
 */

void print_alphabet(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
_putchar(alpha);
_putchar('\n');
}
