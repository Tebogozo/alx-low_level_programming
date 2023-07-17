#include <stdio.h>
#include <time.h>
#include <cstdlib>
/**
* main - entry point
*
* Return: 0 if false.  positive, negative or zero
*/
int main(void)
{
int srand(time(NULL));
int n = rand() - RAND_MAX/ 2;

std::cout << "The number " << n;

if (n > 0)
{
std::cout << " is positive";
}
else if (n == 0)
{
std::cout << " is zero";
}
else
{
std::cout << " is negative";
}

std::cout << std::endl;
return (0);
}
