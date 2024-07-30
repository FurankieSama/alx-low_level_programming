#include "main.h"
/**
 * print_square - prints a square
 * @size: variable determining the size of square
 * Return: Zero
 */
void print_square(int size)
{
int width;
int length;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (width = 0; width < size; width++)
{
for (length = 0; length < size; length++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
