#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: number of time line to be printed
 */

void print_diagonal(int n)
{
int num;
int line;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (num = 0; num < n; num++)
{
for (line = 0; line < num; line++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
