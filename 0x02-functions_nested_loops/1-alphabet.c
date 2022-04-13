#include <stdio.h>
#include "main.h"

/**
*print_alphabet - prints the alphabet in lowercase followed by a new line
*Description - print statement based on the last digit of the random number
*Return: 0
*/
void print_alphabet(void)
{
char s;
s = 'a';
while (s <= 'z')
{
_putchar(s);
s++;
}
_putchar('\n');
return (0);
}
