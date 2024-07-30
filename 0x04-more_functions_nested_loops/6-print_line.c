#include "main.h"
/**
 * print_line - draws a straight line in terminal
 * @n: number of times '_' to be printed
 */
void print_line(int n)
{
int num;
num = 0;
while (num < n)
{
_putchar('_');
num++;
}
_putchar('\n');
}
