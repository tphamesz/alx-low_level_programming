#include <stdio.h>
#include "main.h"

/**
*main - main block
*Description - print statement based on the last digit of the random number
*Return: 0
*/
int main(void)
{
char s[9] = "_putchar";
int i = 0;
while (i < 8)
{
_putchar(s[i]);
i++;
}
_putchar('\n');
return (0);
}
