#include <stdio.h>
/**
 * main - print alphabets in reverse
 * Return: Zero
 */
int main(void)
{
char alp;
for (alp = 'z'; alp >= 'a'; alp--)
{
putchar(alp);
}
putchar('\n');
return (0);
}
