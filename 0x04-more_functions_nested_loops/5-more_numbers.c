#include "main.h"
/**
 * more_numbers - prints 1- 14 10x
 * Return: Zero
 */

void more_numbers(void)
{
char c;
int num;
num = 0;
while (num < 10)
{
c = 0;
while (c <= 14)
{
_putchar(c);
c++;
}
_putchar('\n');
num++;
}
_putchar('\n');
}
