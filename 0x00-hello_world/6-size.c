#include <stdio.h>
/**
 * main -entry point
 * Return: always 0(success)
 */
int main(void)
{
printf("Size of a char: %i byte(s)\n", sizeof(char));
printf("Size of an int: %i byte(s)\n", sizeof(int));
printf("size of a long int: %i bytes(s)\n", sizeof(long int));
printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
printf("Size of a float: %i bytes(s)", sizeof(float));
return (0);
}
