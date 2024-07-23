#include <stdio.h>
/**
 * main - print data type's size using sizeof
 * Return: Zero
 */

int main(void)
{
printf("Size of a char: %ld bytes(s)\n", sizeof(char));
printf("Size of a int: %ld bytes(s)\n", sizeof(int));
printf("Size of a long int: %li bytes(s)\n", sizeof(long int));
printf("Size of a long long int: %ld bytes(s)\n", sizeof(long long int));
printf("Size of a float: %ld byte(s)\n", sizeof(float));
return (0);
}
