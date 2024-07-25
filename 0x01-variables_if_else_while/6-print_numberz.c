#include <stdio.h>
/**
 * main - print 0-9 using putchar
 * Return: Zero
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar('0' + num);
}
putchar('\n');
return (0);
}
