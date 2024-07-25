#include <stdio.h>
/**
 * main - print alphabets except p and q
 * Return: Zero
 */
int main(void)
{
char alp;

for (alp = 'a'; alp <= 'z'; alp++)
{

if (alp != 'e' && alp != 'q')
{
putchar(alp);
}
}
putchar('\n');
return (0);
}

