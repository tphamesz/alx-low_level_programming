#include "main.h"
/**
 * Largest_number - returns the largest of the 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: Largest number
 */
int Largest_number(int a, int b, int c)
{
int Largest;
if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
largest = c;
return (largest);
}
