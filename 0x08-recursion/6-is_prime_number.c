#include "main.h"
/**
*is_prime_number - returns if input integer is a prime number
*@n: input integer
*Return: 1 if prime number, otherwise 0.
*/
int is_prime_number(int n)
{
if (n <= 1 || _sqrt_recursion(n) >= 1)
return (0);
if (_sqrt_recursion(n) == -1)
return (1);
return (_sqrt_recursion(n));
}
