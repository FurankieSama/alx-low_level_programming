#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all natural numbers up to 98
 * @num: integer to be printed
 * Return: Zero
 */

void print_to_98(int num)
{
while (num <= 98)
{
printf("%d, ", num);
num++;
}
while (num > 98)
{
printf("%d, ", num);
num--;
}

printf("\n");
}
