#include <stdio.h>
#include "main.h"
/**
*print_to_98 - check holberton
*@n: An input integer
*Description: this function prints all the natural numbers
*from n to 98, followed by a new line
*Return: nothing
*/
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
printf("%d", n);
if (n == 98)
continue;
printf(", ");
}
printf("\n");
}
else
{
for (; n >= 98; n--)
{
printf("%d", n);
if (n == 98)
continue;
printf(", ");
}
printf("\n");
}
}
