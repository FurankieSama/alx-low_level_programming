#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print out last digit of number
 * Return: Zero
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int mod;
mod = n % 10;
if (mod > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, mod);
}
else if (mod < 6 && mod != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, mod);
}
else
{
printf("Last digit of %d is %d and is 0", n, mod);
}


return (0);
}