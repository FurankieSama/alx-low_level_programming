#include <stdio.h>
/**
 * main - print alphabets in lowercase
 * Return: Zero
 */

int main(void)
{
char alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
putchar(alph);
}
putchar('\n');
return (0);
}
