#include <stdio.h>
/**
 * main - print data type's size using sizeof
 * Return: Zero
 */

int main(void)
{
printf("Size of char: %ld bytes(s)\n", sizeof(char));
printf("Size of int: %ld bytes(s)\n", sizeof(int));
printf("Size of long int: %li bytes(s)\n", sizeof(long int));
printf("Size of long long int: %ld bytes(s)\n", sizeof(long long int));
printf("Size of float: %ld byte(s)\n", sizeof(float));
return (0);
}
