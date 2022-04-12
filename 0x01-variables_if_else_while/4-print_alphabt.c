#include <stdio.h>
/**
*main - main block
*Description - print statement based on the last digit of the random number
*Return: 0
*/
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c != 'q' && c != 'e')
putchar(c);
c++;
}
putchar('\n');
return (0);
}
