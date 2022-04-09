#include <stdio.h>

/**
 * main -entry point
 * description: displays size of various data types of the machine it is compil
 * Return: always 0(success)
 */
int main(void)
{
char chartype;
float floattype
int inttype;
long long longtype;
long int longinttype;
printf("Size of a char: %2d byte(s)\n", sizeof(chartype));
printf("Size of an int: %2d byte(s)\n", sizeof(inttype));
printf("Size of a long int: %2d bytes(s)\n", sizeof(longtype));
printf("Size of a long long int: %2d byte(s)\n", sizeof(longinttype));
printf("Size of a float: %2d bytes(s)", sizeof(floattype));
return (0);
}
