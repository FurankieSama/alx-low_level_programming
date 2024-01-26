#include <stdio.h>

/**
 * main - display size of various types
 * Return: 0
*/

int main(void)
{
char f;
int r;
long a;
long int n;
long long int k;

printf("Size of a char: %lu byte(s)\n", (unsigned long)(f));
printf("Size of an int: %lu byte(s)\n", (unsigned long)(r));
printf("Size of a long: %lu byte(s)\n", (unsigned long)(a));
printf("Size of a long int : %lu byte(s)\n", (unsigned long)(n));
printf("Size of a char: %lu byte(s)\n", (unsigned long)(f));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)(f));
}
