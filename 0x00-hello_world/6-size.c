#include <stdio.h>

/**
 * main -entry point
 * description: displays size of various data types of the machine it is compil
 * Return: always 0(success)
 */
int main(void)
{
   printf("Size of a char: %i byte(s)\n", (int) sizeof(char));
   printf("Size of an int: %i byte(s)\n", (int) sizeof(int));
   printf("Size of a long int: %i bytes(s)\n", (int) sizeof(long int));
   printf("Size of a long long int: %i byte(s)\n", (int) sizeof(long long int));
   printf("Size of a float: %i bytes(s)", (int) sizeof(float));
   return (0);
}
