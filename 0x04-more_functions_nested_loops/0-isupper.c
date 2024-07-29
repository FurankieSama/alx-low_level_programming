#include "main.h"
/**
 * _isupper - check if variable is uppercase or lowercase
 * @c: variable to be checked
 * Return: 1 if uppercase, else return 0
 */
int _isupper(int c)
{
if (c >= "A" || c <= "Z")
{
return (1);
}
else
{
return (0);
}
}
