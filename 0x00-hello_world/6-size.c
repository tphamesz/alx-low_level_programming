#include <stdio.h>
/**
 * main -entry point
 * Return: always 0(success)
 */
int main(void)
{
printf("Size of a char: %i byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %i byte(s)\n", (unsigned long)sizeof(int));
printf("size of a long int: %i bytes(s)\n", (unsigned long)sizeof(long int));
printf("Size of long int: %i byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: %i bytes(s)", (unsigned long)sizeof(float));
return (0);
}
