#include <stdio.h>
/**
 * main - print alphabet in lowercase and uppercase
 * Return: Zero
 */
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
c = 'A';
while (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
