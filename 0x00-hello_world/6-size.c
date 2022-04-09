#include <stdio.h>

/**
 * main -entry point
 * description: displays size of various data types of the machine it is compil
 * Return: always 0(success)
 */
int main(void)
{
printf("Size of a char: %2d byte(s)\n", (int)(sizeof(char)));
printf("Size of an int: %2d byte(s)\n", (int)(sizeof(int)));
printf("Size of a long int: %2d bytes(s)\n", (int)(sizeof(long int)));
printf("Size of a long long int: %2d byte(s)\n", (int)(sizeof(long long int)));
printf("Size of a float: %2d bytes(s)", (int)(sizeof(float)));
return (0);
}
