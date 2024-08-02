#include "main.h"
/**
 * print_triangle - prints a right-sided triangle
 * @size: variable determining the size of the triangle
 * Return: Zero
 */

void print_triangle(int size)
{
int first;
int secnd;
int thrd;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (first = 1; first <= size; first++)
{
for (secnd = first; secnd < size; secnd++)
{
_putchar(' ');
}
for (thrd = 1; thrd <= first; thrd++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
