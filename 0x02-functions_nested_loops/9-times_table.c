#include "main.h"
/**
 * times_table - prints the times table from 0 - 9.
(*
 * Return: Nothing.
 */
void times_table(void)
{
int num, var, res;
for (num = 0; num < 10; num++)
{
for (var= 0; var < 10; var++)
{
res = num * var;
if (var != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (res >= 10)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (res < 10 && var != 0)
			{
				_putchar(' ');
				_putchar((res % 10) + '0');
			}
			else
				_putchar((res % 10) + '0');
		}


}
}