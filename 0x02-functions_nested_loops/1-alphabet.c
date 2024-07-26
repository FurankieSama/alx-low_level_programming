#include "main.h"
/**
 * print_alphabet - print all alphabets
 * Return: Zero
 */
void print_alphabet(void)
{
char c;
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
