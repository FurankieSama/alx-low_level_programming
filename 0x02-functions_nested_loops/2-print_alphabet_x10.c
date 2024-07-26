#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10x
 * Return: Zero
 */
void print_alphabet_x10(void)
{
char c;
int num;
num = 0;
while (num < 10)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
num++;
_putchar('\n');
}
}
