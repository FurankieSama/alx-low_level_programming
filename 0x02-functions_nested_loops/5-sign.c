#include "main.h"
/**
 * print_sign - print sign of a number
 * @n: integer to check
 * Return: 1 if positve, 2 if negative, else Zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar(48);
return (0);
}


}
